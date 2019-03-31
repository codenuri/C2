#include <stdio.h>

#define MAX 256         // 매크로 상수
#define SQUARE(n) ((n) * (n)) // 매크로 함수

int square(int n) { return n * n;}

int main(void)
{
    char name[MAX];

    int a = 3;
    int n1 = square(++a); // 16
    int n2 = SQUARE(++a); // ((++a)*(++a)) => ((a) * (a))
                            // => 25

    printf("%d, %d\n", n1, n2);
}













//
