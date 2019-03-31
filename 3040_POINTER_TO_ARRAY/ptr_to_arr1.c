#include <stdio.h>

int main(void)
{
    int x[3] = {10, 20, 30};

    printf("%d\n", x[0]);   // 10
    printf("%p\n", x);      // аж╪р,

    int *p = x;
}
