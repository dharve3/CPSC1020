// server.cpp
// if you need info on these commands, check ../sockets/server.cpp

#include <cstring> // char arrays
#include <iostream>

#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <thread>

using namespace std;

// Function to handle each client connection
void handleClient(int clientSocket) {
    while (true) {
        char buffer[1024] = {0}; // Buffer for receiving data

        // Receive data
        int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);

        // Check if client disconnected
        if (bytesRead <= 0) {
            // Client disconnected or error occurred
            if (bytesRead == 0) {
                cout << "Client disconnected." << endl;
            } else {
                cerr << "Error receiving data from client." << endl;
            }
            // Close client socket
            cout << "DEBUG: Closing client socket" << endl;
            close(clientSocket);
            return;
        }

        cout << "Message from client: " << buffer << endl;
    }
}

int main() {
    // Creating socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Specifying the address
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // Binding socket
    bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
    
    // Listen for incoming connections to the assigned socket
    listen(serverSocket, 5);

    while (true) {
        // Accepting connection request
        int clientSocket = accept(serverSocket, nullptr, nullptr);

        // Spawn a new thread to handle each client
        thread clientThread(handleClient, clientSocket);
        clientThread.detach(); // Detach the thread to allow it to run independently
    }

    // Close the server socket (This will never execute in this example)
    close(serverSocket);
    
    return 0;
}