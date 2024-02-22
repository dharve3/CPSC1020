// server.cpp
// if you need info on these commands, check ../sockets/server.cpp

#include <cstring> // char arrays
#include <string> // c++ strings
#include <iostream>
#include <vector> // managing client sockets (vectors save us)
#include <algorithm> // for removing specific values from vectors
#include <thread>

#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

// Global vector to store client sockets
vector<int> clients;
// Global vector to store client nicknames
vector<string> nicknames;

// Function to broadcast to all connected clients
void broadcast(const char* message, int senderSocket) { // Could remove senderSocket argument if I wanted to broadcast back to ALL clients
    for (int& clientSocket : clients) {
        if (clientSocket != senderSocket) {
            send(clientSocket, message, strlen(message), 0);
        }
    }
}

// Function to recieve messages from a client
void recieve(int clientSocket) {
    char buffer[1024] = {0}; // Buffer for receiving data

    while (true) {
        // Clears buffer
        for (size_t i = 0; i < sizeof(buffer); i++) {
            buffer[i] = '\0';
        }

        // Receive data
        int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);

        // Check for client disconnect/error cases
        if (bytesRead == 0) {
            // Client disconnected or error occourred
            if (bytesRead == 0) {
                cout << "Client disconnected." << endl;
            } else {
                cerr << "Error receiving data from client." << endl;
            }
            // Remove client socket from the list
            clients.erase(remove(clients.begin(), clients.end(), clientSocket), clients.end()); // erase-remove idiom
            // Close client socket
            close(clientSocket);
            return;
        }

        cout << "Message from client: " << buffer << endl;

        // Broadcast the received message to all clients
        broadcast(buffer, clientSocket); // Could possibly remove clientSocket argument here, see comment in broadacst function
    }
}

// Function to handle each incoming client connection
void handle(int clientSocket) {
    const char handshake[] = "NICK25185"; // Nickname handshake
    char buffer[1024] = {0}; // Buffer for receiving data

    int sendHandshake = send(clientSocket, handshake, sizeof(handshake), MSG_NOSIGNAL);
    if (sendHandshake == -1) {
        cout << "Failed to send handshake to client" << endl;
        close(clientSocket);
        return;
    }

    // Update to handle recv nicknames once that is implemented
    int recvHandshake = recv(clientSocket, buffer, sizeof(buffer), MSG_NOSIGNAL);
    if (recvHandshake == -1) {
        cout << "Failed to recv handshake/nickname from client" << endl; 
        close(clientSocket);
        return;
    } else if (strcmp(handshake, buffer) != 0) {
        cout << "Improper client handshake" << endl;
        close(clientSocket);
        return;
    }

    // Add client socket to the list of clients
    clients.push_back(clientSocket);

    // Receive and broadcast messages
    recieve(clientSocket);
}

// MAIN FUNCTION
int main() {
    // Creating socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Specifying the address
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = inet_pton("127.0.0.1");

    // Binding socket
    bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
    
    // Listen for incoming connections to the assigned socket
    listen(serverSocket, 5);

    // Output info
    cout << "Server listening on " << serverAddress.sin_addr.s_addr << ":" << ntohs(serverAddress.sin_port) << endl;
    // Unsure of how to format this atm, dont be suprised if errors
    // For port could be ntohs();

    while (true) {
        // Accepting connection request
        int clientSocket = accept(serverSocket, nullptr, nullptr);

        // Spawn a new thread to handle each client
        thread clientThread(handle, clientSocket);
        clientThread.detach(); // Detach the thread to allow it to run independently
    }

    // Close the server socket (This will never execute in this example)
    close(serverSocket);
    
    return 0;
}