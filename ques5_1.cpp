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
struct hostent* address;

int main(int argc,char** argv){
    cout<<endl;
    for(int i=0+1;i<=argc-1;i++){
        if((address = gethostbyname(argv[i]))==NULL){
            cout<<argv[i]<<endl;
            herror("No ip found");
            cout<<endl;
            }
        else{
            cout<<argv[i]<<endl;
            inet_ntop(AF_INET,address->h_addr_list[0],tmp,16);
            cout<<tmp<<endl;
            cout<<endl;
        }
    }

    return 0;
}