#include <stdio.h>

#define _INTSIZEOF(n)         \
    ((sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1))

int main(void)
{
    char c = 0;
    short s = 0;
    int   n = 0;
    double d = 0;

    // char 를 전달할때
    printf("%d\n", _INTSIZEOF(c));
        // 1 + 4 - 1 => 4 의하위2비트를 0으로 => 4

    printf("%d\n", _INTSIZEOF(s));
        // 2 + 4 - 1 => 5(101) 의하위2비트를 0으로 => 4

    printf("%d\n", _INTSIZEOF(n));
        // 4 + 4 - 1 => 7(111) 의하위2비트를 0으로 => 4

    printf("%d\n", _INTSIZEOF(d));
        // 8 + 4 - 1 => 11(1011) 의하위2비트를 0으로 => 8

}



















//
