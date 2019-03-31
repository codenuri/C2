#include <stdio.h>

#ifdef __unix__
#define asm_main _asm_main
#endif

int asm_main(void);

int main()
{
    int n = asm_main();
    printf("result : %d\n", n);
}
