#include <stdio.h>

int main(void)
{
    int *p = (int*)1000;

    // *p = 100; // error

    printf("%p\n", p); // ok..
}
