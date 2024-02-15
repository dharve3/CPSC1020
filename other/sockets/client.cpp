// client.cpp

#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    // Creating socket
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    // DOMAIN: AF_INET = IPv4
    // TYPE: SOCK_STREAM = TCP;
    // PROTOCOL: 0

    // Specifying address
    sockaddr_in serverAddress; // Data type to store the address of the socket
    serverAddress.sin_family = AF_INET; // 
    serverAddress.sin_port = htons(8080); // Convert unsigned int from machine byte to network byte
    serverAddress.sin_addr.s_addr = INADDR_ANY; // INADDR_ANY = No particular IP, listen to all available IPs; INADDR_LOOPBACK = localhost (127.0.0.1)
    // Use inet_addr(IP) for specific addresses to convert to 32-bit binary rep in network byte order
    // Use inet_pton(AF_INET, ipAddress, &(serverAddress.sin_addr)) for a more modern approach

    // Sending connection request
    connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
    // Add some info here about connect()

    // Sending data
    const char* message = "Hello, server!";
    send(clientSocket, message, strlen(message), 0);
    // clientSocket = socket you send from
    // message = message to be sent
    // strlen(message) = length of message
    // 0 = flags

    // Closing socket
    close(clientSocket);

    return 0;
}