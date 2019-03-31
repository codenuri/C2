#include <stdio.h>

#define print_value1( x ) printf("%s = %d\n", #x, x )
#define print_value2( x ) printf("%d, %d\n", x##1, x##2 )

int main(void)
{
    int value1 = 10;
    int value2 = 20;

    print_value1( value1 );
        // printf("%s = %d\n", "value1 / 2", value1 / 2 )

    print_value2( value );
        // printf("%d, %d\n", value1, value2 )
}
