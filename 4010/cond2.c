#include <stdio.h>

#define VERSION  1000
#define DEBUG
#undef DEBUG

int main(void)
{
    // 매크로 심볼 정의 여부 조사
#ifdef DEBUG
    // ...
#else
    // ...
#endif

#ifndef DEBUG
    // ...
#endif

    // 심볼 값 조사
#if   VERSION < 1000
    printf("1000 보다 작은 경우\n");
#elif VERSION == 1000
    printf("1000\n");
#else
    printf("1000 보다 큰경우\n");
#endif

#if 0
    printf("이부분을\n");
    printf("주석처리하고 싶을때\n");
#endif

}







//
