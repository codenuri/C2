#include <stdio.h>

void show(int a)
{
    printf("show : %d\n", a);
}

#define FE_1(FUNC, X) FUNC(X)
#define FE_2(FUNC, X, ...) FUNC(X); FE_1(FUNC, __VA_ARGS__)
#define FE_3(FUNC, X, ...) FUNC(X); FE_2(FUNC, __VA_ARGS__)
#define FE_4(FUNC, X, ...) FUNC(X); FE_3(FUNC, __VA_ARGS__)
#define FE_5(FUNC, X, ...) FUNC(X); FE_4(FUNC, __VA_ARGS__)

int main(void)
{
    FE_1(show, 1);
    FE_2(show, 1, 2); // show(1); show(2)
    FE_3(show, 1, 2, 3);
    FE_4(show, 1, 2, 3, 4);
    FE_5(show, 1, 2, 3, 4, 5);

    //FOREACH(show, 1,2,3,4,5); //
}



























//
