#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h>
#include <arpa/inet.h> 
#include <string.h>
#include <iostream>
using namespace std;

int main(int argc,char** argv){
    
    in_addr_t ip = inet_addr(argv[1]);
    in_port_t port = atoi(argv[2]);

    struct sockaddr_in address;
    address.sin_addr.s_addr = htonl(ip);
    address.sin_family = AF_INET;
    address.sin_port = htons(port);

    cout << inet_ntoa(address.sin_addr)<<endl;
    cout << ntohs(address.sin_port)<<endl;

    return 0;
    }