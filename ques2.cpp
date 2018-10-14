// Server side C/C++ program to demonstrate Socket programming 
#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h>
#include <arpa/inet.h> 
#include <string.h>
#include <iostream>
using namespace std;

void func1(struct sockaddr_in* address,char* c){

    inet_aton(c,&(address->sin_addr));

}

void printIPA(struct sockaddr_in address){
    printf("%s\n",inet_ntoa(address.sin_addr));
}

int main(int argc,char** argv){
    int server_fd, new_socket, val_read;
    struct sockaddr_in address;

    func1(&address,argv[1]);
    printIPA(address);

    return 0;
}
