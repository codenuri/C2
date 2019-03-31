#include <stdio.h>

void show(int a) { printf("show : %d\n", a);}

#define FE_1(FUNC, X) FUNC(X)
#define FE_2(FUNC, X, ...) FUNC(X); FE_1(FUNC, __VA_ARGS__)
#define FE_3(FUNC, X, ...) FUNC(X); FE_2(FUNC, __VA_ARGS__)
#define FE_4(FUNC, X, ...) FUNC(X); FE_3(FUNC, __VA_ARGS__)
#define FE_5(FUNC, X, ...) FUNC(X); FE_4(FUNC, __VA_ARGS__)

#define CONCATENAT( arg1, arg2 ) CONCATENAT1( arg1, arg2 )
#define CONCATENAT1( arg1, arg2 ) arg1##arg2

#define FOREACH_N(N, FUNC, ... )    \
            CONCATENAT(FE_, N) (FUNC, __VA_ARGS__)

#define CNT 5
int main(void)
{
    FOREACH_N(3, show, 1,2,3);
    //FOREACH_N(CNT, show, 1,2,3,4,5);

    //FE_5(show, 1,2,3,4,5);

    //FOREACH(show, 1,2,3,4,5); //
}



























//
