#include <stdio.h>

#define typename(x) _Generic((x),           \
        _Bool: "_Bool",                     \
unsigned char: "unsigned char",             \
         char: "char",                      \
  signed char: "signed char",               \
  short int: "short int",                   \
unsigned short int: "unsigned short int",   \
          int: "int",                       \
 unsigned int: "unsigned int",              \
     long int: "long int",                  \
unsigned long int: "unsigned long int",     \
long long int: "long long int",             \
unsigned long long int: "unsigned long long int", \
        float: "float",                     \
       double: "double",                    \
  long double: "long double",               \
       char *: "char*",                     \
       void *: "void*",                     \
        int *: "int*",                      \
      default: "other")


int main() 
{
    int n = 0;
    double d = 3.4;
    const char* s = "hello";
    
    printf("%s\n", typename(n));
    printf("%s\n", typename(d));
    printf("%s\n", typename(s));

}




