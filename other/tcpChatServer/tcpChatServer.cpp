// Insert respective header here

#include "tcpChatServer.h"

const int PORT = 8080;
const int BUFFER_SIZE = 1024;

using namespace std;

void error(const char *msg)



int main( ) {
    int serverSocket, clientSocket;
    struct sockaddr_in serverAddr, clientAddr;
    socklen_t clientAddrSize;
    char buffer[BUFFER_SIZE];
    int bytesReceived;

    serverSocket = socket(AF_INET, SOCK_STREAM, 00);
    // "Check for errors and handle accordingly"

    memset(&serverAddr, '0', sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serverAddr.sin_port = htons(PORT);

    bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr));

    listen(serverSocket, 5);

    clientAddrSize = sizeof(clientAddr);
    clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddr, &clientAddrSize);

    while (true) {
        memset(buffer, '\0', BUFFER_SIZE);
        bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0);
        // "Check for errors and handle accordingly"
        // Process recived message
        // Send message to all clients in chatroom
    }

    close(clientSocket);
    close(serverSocket);

	return 0;
}
