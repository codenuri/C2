#include <stdio.h>

//#define DEBUG
//#define VERSION 1000

int main(void)
{
#ifdef DEBUG
    printf("디버그 메세지\n");
#endif

#if  VERSION == 1000
    printf("VERSION : 1000\n");
#endif
}
