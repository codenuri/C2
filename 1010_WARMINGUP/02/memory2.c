#include <stdio.h>

int  g1   = 0x11223344;
char g2[] = "abcdefg";

void foo(void)
{
    static int sx = 0xAABBCCDD;
    int lx = 0x55667788;
    printf("hello world\n");
}
int main(void)
{
    foo();
}
