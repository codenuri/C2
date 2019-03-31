#include <stdio.h>

int main(void)
{
    int n = 10;

    int  *p1 = &n; // ok

    //char *p2 = &n; // C :경고, C++ : 에러
    char *p2 = (char*)&n; // ok..

    const int *p3 = &n; //  ok..
    n = 30; // ok
    *p3 = 30; // error.

}
