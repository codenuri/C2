#include <stdio.h>
//#include <stdarg.h>

#define _INTSIZEOF(n)         \
    ((sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1))

typedef char *va_list;

#define va_start( ap, v)  (ap = ((va_list)&v) + _INTSIZEOF(v))
#define va_arg(ap, t)     \
        *(t*)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t))

#define va_end(ap) (ap = (va_list)0)


int Sum(int cnt, ... )
{
    int s = 0;

    va_list args;           // char * args
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
