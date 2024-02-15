// client.cpp

#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

const char IP = "127.0.0.1";

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
    serverAddress.sin_addr.s_addr = IP; // INADDR_ANY = No particular IP, listen to all available IPs

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