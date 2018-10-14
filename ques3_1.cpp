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
    
    union {
        int i;
        char c[sizeof(int)];
    } x;
    
    x.i = 1;
    if(x.c[0] == 1){cout<< "little-endian\n"<<endl;}
    else{cout<<"big-endian\n"<<endl;}

    return 0;
}

