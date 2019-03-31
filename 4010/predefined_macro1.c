#include <stdio.h>

#define MSG "Hello"
#define MAX 1000

int main(void)
{
    printf("%s\n", MSG);
    printf("%d\n", MAX);

    printf("%s\n", __FILE__);
    printf("%d\n", __LINE__);
    printf("%s\n", __TIME__);
    printf("%s\n", __DATE__);
    printf("%s\n", __func__);
    printf("%d\n", __STDC__);
//    printf("%d\n", __STDC_VERSION__);
}












//
