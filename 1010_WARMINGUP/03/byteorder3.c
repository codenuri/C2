#include <stdio.h>
//#include <arpa/inet.h> // for linux
#include <winsock2.h>    // for windows

// cl byteorder3.c ws2_32.lib

int main(void)
{
    int n1 = 0x11223344; // 0x44332211

    int n2 = htonl(n1); //

    printf("%x\n", n1); // 0x11223344
    printf("%x\n", n2); // 0x44332211

}














//
