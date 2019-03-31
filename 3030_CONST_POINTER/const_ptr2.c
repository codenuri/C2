#include <stdio.h>

typedef const int *PTR_TO_CONST;
typedef int *const CONST_PTR;

typedef int *PINT;
//typedef const PINT WHERE_CONST;
typedef PINT const WHERE_CONST;

int main(void)
{
    int n1 = 10;
    int n2 = 10;

    WHERE_CONST p3 = &n1; // p3가 const ? ok
                          // p3를 따라가면 const ?

    p3 = &n2; // error
    *p3 = 20; // ok.

//    const int *p1 = &n1; // p1을 따라가면 const
//    int *const p2 = &n1; // p2가 const

    PTR_TO_CONST p1 = &n1; // p1을 따라가면 const
    CONST_PTR    p2 = &n1; // p2가 const

    p1 = &n2; // ok
    *p1 = 20; // error

    p2 = &n2; // error
    *p2 = 20; // ok
}

















//
