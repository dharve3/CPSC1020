// server.cpp

#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

using namespace std;

const char* IP = "127.0.0.1";

int main() {
    // Creating socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    // DOMAIN: AF_INET = IPv4
    // TYPE: SOCK_STREAM = TCP
    // PROTOCOL: 0

    // Specifying the address
    sockaddr_in serverAddress; // Data type to store the address of the socket
    serverAddress.sin_family = AF_INET; // 
    serverAddress.sin_port = htons(8080); // Convert unsigned int from machine byte to network byte
    serverAddress.sin_addr.s_addr = IP; // INADDR_ANY = No particular IP, listen to all available IPs; INADDR_LOOPBACK = localhost (127.0.0.1)

    // Binding socket
    bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
    // Add some info here about bind()

    // Listening to the assigned socket
    listen(serverSocket, 5);

    // Accepting connection request
    int clientSocket = accept(serverSocket, nullptr, nullptr);
    // binds clientSocket with serverSocket
    // 1st nullptr = address, address of connecting entity
    // 2nd nullptr = address_len, amount of space pointed to by address

    // Recieving data
    char buffer[1024] = {0}; // char array buffer assigned to all 0
    recv(clientSocket, buffer, sizeof(buffer), 0);
    // clientSocket = socket you recv from 
    // buffer = void ptr to buffer 
    // sizeof(buffer) = size_t length of buffer
    // 0 = flags
    cout << "Message from client: " << buffer << endl;
    // Prints directly from buffer

    // Closing the socket.
    close(serverSocket);

    return 0;
}