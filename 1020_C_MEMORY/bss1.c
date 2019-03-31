#include <stdio.h>

int x = 100;
int buff[1000000];// = {1};


int main()
{
    printf("&buff : %p\n", buff);
    printf("&x : %p\n", &x);
}
