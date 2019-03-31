#include <stdio.h>

int main(void)
{
    int n = 10;

    printf("%d\n", n); // °ª, 10
    printf("%d\n", sizeof(n)); // 4
    printf("%p\n", &n); // 0x1000

    int *p = &n;

    printf("%p\n", &p); // 0x2000
    printf("%p\n", p);  // 0x1000
    printf("%d\n", *p); // 10
    printf("%d\n", sizeof(p)); // 32bit 4, 64bit 8
}













//
