#include <stdio.h>
#include <stdalign.h>

struct  PACKET 
{
    alignas(32) char c1;
    double d1;
    char c2;
//    int n1;
};

int main(void)
{
    alignas(32) int n = 0;
    printf("%d\n", alignof(struct PACKET));
    printf("%d\n", sizeof(struct PACKET));
}