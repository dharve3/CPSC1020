#include <iostream>
#include <thread>
#include <vector>
#include <string>
#include <mutex>

std::mutex mtx;

void chat(std::string name) {
    std::string message;
    while (true) {
        std::cout << "[" << name << "]: ";
        std::getline(std::cin, message);

        // Exit condition
        if (message == "/exit")
            break;

        // Send message
        mtx.lock();
        std::cout << "[" << name << "]: " << message << std::endl;
        mtx.unlock();
    }
}

int main() {
    std::vector<std::thread> participants;

    // Define names for participants
    std::vector<std::string> names = {"Alice", "Bob", "Charlie", "David"};

    // Create threads for participants
    for (const auto& name : names) {
        participants.push_back(std::thread(chat, name));
    }

    // Join threads
    for (auto& participant : participants) {
        participant.join();
    }

    return 0;
}
