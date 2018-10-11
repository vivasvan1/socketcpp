// Server side C/C++ program to demonstrate Socket programming 
#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h>

// struct sockaddr_in* func1(){
    // struct sockaddr_in addr1;
    // addr1.sin_family = AF_INET
    // addr1.sin_addr.s_addr = 
// }

int main(int argc,char** argv){
    int server_fd, new_socket, val_read;
    struct sockaddr_in address;
    // int opt = 1;
    // int addrlen = sizeof(address);
    // char buffer[1024] = {0};
    // char *hello = "hello from the server"
    address.sin_family = AF_INET;
    // address.sin_addr.s_addr = 
    // printf("ad");
    // printf("%u",INADDR_ANY);
    // printf("ad");
    
    // printf("hello world\n");
    return 0;
}