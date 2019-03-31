#include <stdio.h>

int main(void)
{
    int n = 0x11223344;
    int   *p1 = &n;
    char  *p2 = (char*)&n;
    short *p3 = (short*)&n;
    float *p4 = (float*)&n;

    printf("%p : %x\n", p1, *p1); // 1000, 11223344
    printf("%p : %x\n", p2, *p2); // 1000, 44
    printf("%p : %x\n", p3, *p3); // 1000, 3344
    printf("%p : %f\n", p4, *p4); // 1000, ???
}
































//
