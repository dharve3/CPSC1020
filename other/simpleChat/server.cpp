#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <thread>
#include <vector>

#define PORT 8080
#define MAX_CLIENTS 10
#define BUFFER_SIZE 1024

std::vector<int> clients;

void handle_client(int client_socket) {
    char buffer[BUFFER_SIZE];
    while (true) {
        int bytes_received = recv(client_socket, buffer, BUFFER_SIZE, 0);
        if (bytes_received <= 0) {
            std::cerr << "Client disconnected.\n";
            close(client_socket);
            break;
        }

        buffer[bytes_received] = '\0';
        std::cout << "Received: " << buffer << std::endl;

        for (int client : clients) {
            if (client != client_socket) {
                send(client, buffer, strlen(buffer), 0);
            }
        }
    }
}

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_len = sizeof(client_addr);

    // Create server socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        std::cerr << "Failed to create socket.\n";
        return EXIT_FAILURE;
    }

    // Set server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Bind the socket to the specified port
    if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        std::cerr << "Failed to bind socket.\n";
        return EXIT_FAILURE;
    }

    // Listen for incoming connections
    if (listen(server_socket, MAX_CLIENTS) == -1) {
        std::cerr << "Failed to listen on socket.\n";
        return EXIT_FAILURE;
    }

    std::cout << "Server listening on port " << PORT << std::endl;

    // Accept incoming connections and handle them in separate threads
    while (true) {
        client_socket = accept(server_socket, (struct sockaddr *)&client_addr, &client_addr_len);
        if (client_socket == -1) {
            std::cerr << "Failed to accept connection.\n";
            continue;
        }

        clients.push_back(client_socket);
        std::cout << "New client connected.\n";

        std::thread client_thread(handle_client, client_socket);
        client_thread.detach();
    }

    // Close the server socket
    close(server_socket);

    return EXIT_SUCCESS;
}
