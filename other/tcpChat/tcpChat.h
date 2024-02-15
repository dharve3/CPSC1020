#ifndef TCPCHAT_H
#define TCPCHAT_H

#include <iostream>
#include <string> // C++ strings
#include <thread> // Multi-threading
#include <cstring> // String manipulation
#include <cstdlib> // exit() function
#include <unistd.h> // UNIX standard functions

#include <arpa/inet.h> // manipulate IP addresses
#include <sys/socket.h> // Sockets
#include <netinet/in.h> // Defining internet domain addrs

// Constants
// const int PORT = 12345;
// const int BUFFER_SIZE = 1024;
// const std::string IP = "127.0.0.1";

// Class Declaration
class TCPChat {
public:
    TCPChat();
    ~TCPChat();
    void startChat(const std::string& peerIP, int peerPort);
    void sendMessage(const std::string& message);
    void recieveMessage();

private:
    int socket_;
    struct sockaddr_in serverAddr_;
    const int BUFFER_SIZE = 1024;
};

#endif // TCPCHAT_H