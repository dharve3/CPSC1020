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

    const char handshake[] = "ThisIsAHandshake12345";
    char buffer[1024] = {0}; // Buffer for receiving data

    int recvHandshake = recv(clientSocket, buffer, sizeof(buffer), MSG_NOSIGNAL);
    if (recvHandshake == -1) {
        cout << "Failed to recv handshake from client" << endl;
        close(clientSocket);
        return;
    } else if (strcmp(handshake, buffer) != 0) {
        cout << "Improper server handshake" << endl;
        close(clientSocket);
        return;
    }
    
    int sendHandshake = send(clientSocket, handshake, sizeof(handshake), MSG_NOSIGNAL);
    if (sendHandshake == -1) {
        cout << "Failed to send handshake to client" << endl;
        close(clientSocket);
        return;
    }


    string message;

    while (true) {
        // Get input from user
        cout << "Message to send to server (type 'quit' to exit): ";
        getline(cin, message);

        if (message == "quit") {
            break;
        }

        // Convert c++ string to cstring char* array
        int length = message.length();
        char* cMessage = new char[length + 1];

        strcpy(cMessage, message.c_str());

        // Sending data
        int msgSend = send(clientSocket, cMessage, strlen(cMessage), MSG_NOSIGNAL);
        // MSG_NOSIGNAL flag -> returns -1 if send fails
        if (msgSend == -1) {
            cout << "Socket send failed" << endl;
            delete[] cMessage;
            break;
        }
        // Notifies user if message fails to send

        delete[] cMessage;
    }

    // Closing socket
    close(clientSocket);

    return 0;
}