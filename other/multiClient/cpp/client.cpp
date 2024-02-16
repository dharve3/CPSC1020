// client.cpp
// if you need info on these commands, check ../sockets/client.cpp

#include <cstring> // char arrays
#include <string> // 
#include <iostream>

#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

using namespace std;

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

    // Get input from user
    string message;

    cout << "Message to send to server: ";
    getline(cin, message);

    int length = message.length();
    char* cMessage = new char[length + 1];

    strcpy(cMessage, cMessage.c_str());

    // Sending data
    // const char* message = "Hello, server!"; // Old message
    send(clientSocket, cMessage, strlen(cMessage), 0);

    delete[] cMessage;

    // Closing socket
    close(clientSocket);

    return 0;
}