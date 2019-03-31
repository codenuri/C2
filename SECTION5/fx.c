#include <stdio.h>

int main(void)
{
    int(*f1[2])[2];
    int(*f2(int(*)[2]))[2];
    
    printf("%d\n", sizeof(f1));
    printf("%d\n", sizeof(f2(0)));
}











