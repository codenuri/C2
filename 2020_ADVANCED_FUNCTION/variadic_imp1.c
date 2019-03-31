#include <stdio.h>

void foo(int n1, char c, short s, int n2)
{
    int *p = &n1 + 1;

    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));
}

int main(void)
{
    int   n1 = 10;
    char  c = 20;
    short s = 30;
    int   n2 = 40;

    foo( n1, c, s, n2);
}










//
