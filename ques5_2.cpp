// Server side C/C++ program to demonstrate Socket programming 
#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h>
#include <arpa/inet.h> 
#include <string.h>
#include <netdb.h>
#include <iostream>
using namespace std;

char tmp[16];
struct hostent *he;
struct in_addr ipv4addr;
struct in6_addr ipv6addr;

int main(int argc,char** argv){

    for(int i=0+1;i<=argc-1;i++){
        inet_pton(AF_INET, argv[i], &ipv4addr);
        if ((he = gethostbyaddr(&ipv4addr, sizeof ipv4addr, AF_INET))==NULL){
            herror("no host was found");
        }
        else{
        printf("Host name: %s\n", he->h_name);
        }

    }
    return 0;
}