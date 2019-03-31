#include <stdio.h>

int main(void)
{
    int n1 = 0x11223344;

    char *p = (char*)&n1;

    if ( *p == 0x11 )
        printf("Big endian\n");
    else if ( *p == 0x44)
        printf("Little endian\n");
    else
        printf("Unknown endian\n");

}
