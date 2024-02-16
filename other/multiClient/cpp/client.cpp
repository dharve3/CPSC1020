// client.cpp
// if you need info on these commands, check ../sockets/client.cpp

#include <cstring> // char arrays
#include <iostream>

#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    // Creating socket
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Specifying address
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // Sending connection request
    connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));

    // Sending data
    const char* message = "Hello, server!";
    send(clientSocket, message, strlen(message), 0);

    // Closing socket
    close(clientSocket);

    return 0;
}