// client.cpp
// if you need info on these commands, check ../sockets/client.cpp

#include <cstring> // char arrays
#include <string> // c++ strings
#include <iostream>
#include <thread> // For recv/write threads

#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

using namespace std;

// Global client socket var
int clientSocket;
// Global client nickname var
string nickname;

// Function to receive messages from the server
void receiveMessage() {
    char buffer[1024] = {0}; // Buffer for receiving data

    while (true) {
        // Clears buffer
        for (size_t i = 0; i < sizeof(buffer); i++) {
            buffer[i] = '\0';
        }

        // Receive data
        int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);

        if (strcmp(buffer, "NICK25185"))
            send(clientSocket, nickname.c_str(), nickname.length(), 0);

        // Check if server disconnected
        if (bytesRead <= 0) {
            // Server disconnected or error occurred
            if (bytesRead == 0) {
                cout << "Server disconnected." << endl;
            } else {
                cerr << "Error receiving data from server." << endl;
            }
            // Close client socket
            close(clientSocket);
            exit(1);
        }

        cout << "Message from server: " << buffer << endl;
    }
}

// Function to send messages to the server
void sendMessage() {
    string message;

    while (true) {
        // Get input from user
        cout << "Message to send to server (type 'quit' to exit): ";
        getline(cin, message);

        if (message == "quit") {
            break;
        }

        // Sending data
        int msgSend = send(clientSocket, message.c_str(), message.length(), 0);
        if (msgSend == -1) {
            cout << "Message failed to send." << endl;
            break;
        }
    }

    // Close the socket
    close(clientSocket);
}


int main() {
    string ip, port;

    // Get user input for ip and port to connect to
    cout << "Enter an address to connect to (localhost is default): ";
    getline(cin, ip);
    cout << "Enter a port to use (8080 is default): ";
    getline(cin, port);

    // Set default values if none given
    if (ip.empty())
        ip = "127.0.0.1"
    if (port.empty())
        port = "8080"

    // Get user input for nickname
    cout << "Choose a nickname, no spaces: "
    getline(cin, nickname);
    nickname.erase(remove_if(nickname.begin(), nickname.end(), isspace), nickname.end()); // Remove whitespace from nickname

    // Creating socket
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Specifying address
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(stoi(port));
    serverAddress.sin_addr.s_addr = inet_pton(ip); // inet_addr is deprecated, inet_pton supports IPv4 and IPv6

    // Sending connection request
    connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));

    // Start seperate thread for receiving and writing messages
    thread receiveThread(receiveMessage);
    thread writeThread(sendMessage);

    // Wait for threads to finish
    receiveThread.join();
    writeThread.join();

    return 0;
}