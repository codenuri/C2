#include <stdio.h>
#include <stdarg.h>

int Sum(int cnt, ... )
{
    int s = 0;
    va_list args;
    va_start(args, cnt);

    for ( int i= 0; i <cnt; i++)
        s = s + va_arg(args, int);
    va_end(args);
    return s;
}
int main(void)
{
    int s = Sum(5, 1,2,3,4,5);

    printf("%d\n", s);
}
