#include <stdio.h>

int square_int(int a)       
{ 
    printf("int\n");
    return a * a;
}
double square_double(double a) 
{ 
    printf("double\n");
    return a * a;
}

#define square(x) _Generic( (x),            \
                    int:square_int,         \
                    double:square_double )(x)

int main(void)
{
    square_int(3);
    square_double(3.4);
    
    square(3);
    square(3.4);
}














