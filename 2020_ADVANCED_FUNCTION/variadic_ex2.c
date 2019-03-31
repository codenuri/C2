#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt, ... );

int main(void)
{
    int    n = 3;
    double d = 3.4;
    char  *s = "hello";

    minprintf("hello\n");
    minprintf("%d, %f, %s\n", n, d, s);
}

void minprintf(char *fmt,...)
{
    va_list args;
    char *p,*sval;
    int ival;
    double dval;

    va_start(args,fmt);

    for(p=fmt;*p;p++)
    {
        if(*p != '%')
        {
            putchar(*p);
            continue;
        }

        switch(*++p)
        {
            case 'd':
                ival = va_arg(args,int);
                printf("%d",ival);
                break;
            case 'f':
                dval = va_arg(args,double);
                printf("%f",dval);
                break;
            case 's':
                for(sval = va_arg(args,char *);*sval;sval++)
                    putchar(*sval);
                break;
            default:
                putchar(*p);
                break;
        }
    }
    va_end(args);
}
