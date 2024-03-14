// IPv4 demo of inet_ntop() and inet_pton()

#include <iostream>

#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

int main() {
    struct sockaddr_in sa;
    char str[INET_ADDRSTRLEN];

    // store this IP address in sa:
    inet_pton(AF_INET, "192.0.2.33", &(sa.sin_addr));

    // now get it back and print it
    inet_ntop(AF_INET, &(sa.sin_addr), str, INET_ADDRSTRLEN);

    printf("%s\n", str); // prints "192.0.2.33"
    cout << str << endl;
}
