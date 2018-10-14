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

    int server_fd;
    int opt = 1;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    int PORT = 80;

    // Creating socket file descriptor 
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
    { 
        perror("socket failed"); 
        exit(EXIT_FAILURE); 
    } 
    address.sin_family = AF_INET; 
    address.sin_addr.s_addr = inet_addr(argv[1]); 
    address.sin_port = htons( PORT ); 
    
    connect(server_fd,(struct sockaddr *)&address,addrlen);
    
    struct sockaddr_in my_address;

    int len = sizeof(my_address);
    getsockname(server_fd,(struct sockaddr*)&my_address,(socklen_t *)&len);

    cout<< inet_ntoa(my_address.sin_addr) <<endl;
    cout<< ntohs(my_address.sin_port) <<endl;


    close(server_fd);
    return 0;

}