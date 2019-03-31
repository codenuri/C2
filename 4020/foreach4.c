#include <stdio.h>

#define COUNT(...) COUNT_IMP(__VA_ARGS__, 5,4,3,2,1,0)
#define COUNT_IMP(_1, _2, _3, _4, _5, N, ... ) N

int main(void)
{
    int n1 = COUNT(1,2,3,4,5); // 5
    int n2 = COUNT(1,2,3);     // 3
}
