#include <stdio.h>

int main(void)
{
    double d = 3.4;
    
    int n = _Generic("AA", int:0, double:1, default:2);
    
    printf("%d\n", n);
}
