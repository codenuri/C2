#include <stdio.h>

int main(void)
{
    printf("compiler is");

#ifdef __GNUC__
    printf(" gcc\n");
#endif

#ifdef _MSC_VER
    printf(" cl\n");
#endif

}
