// Insert respective header here

#include "tcpChat.h"

TCPChat::TCPChat() {
    // Create socket
    socket_ = socket(AF_INET, SOCK_STREAM, 0);
    if (socket_ == -1) {
        std::cerr << "Error: Failed to create socket\n";
        exit(EXIT_FAILURE);
    }
}

TCPChat::~TCPChat() {
    // Close socket
    close(socket_);
}

void TCPChat::startChat(const std::string& peerIP, int peerPort) {
    serverAddr_.sin_family = AF_INET;
    serverAddr_.sin_port = htons(peerPort);
    serverAddr_.sin_addr.s_addr = inet_addr(peerIP.c_str());

    // Connect to peer
    if (connect(socket_, (struct sockaddr *)&serverAddr_, sizeof(serverAddr_)) == -1) {
        std::cerr << "Error: Connection failed\n";
        exit(EXIT_FAILURE);
    }

    std::thread recvThread(&TCPChat::recieveMessage, this);
    recvThread.detach(); // Detach thread to run independently

    std::string message;
    while (true) {
        std::getline(std::cin, message);
        sendMessage(message);
    }
}

void TCPChat::sendMessage(const std::string& message) {
    send(socket_, message.c_str(), message.size(), 0);
}

void TCPChat::recieveMessage() {
    char buffer[BUFFER_SIZE];
    while (true) {
        ssize_t bytesReceived = recv(socket_, buffer, BUFFER_SIZE, 0);
        if (bytesReceived > 0) {
            buffer[bytesReceived] = '\0'; // Null-termniate the received data
            std::cout << "Received: " << buffer << std::endl;
        } else if (bytesReceived == 0) {
            std::cout << "Peer disconnected\n";
            break;
        } else {
            std::cerr << "Error: Failed to receive message\n";
            break;
        }
    }
}

int main( ) {
    TCPChat chat;
    chat.startChat("127.0.0.1", 12345); 
	return 0;
}
