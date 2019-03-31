#include <stdio.h>

void show(int a)
{
    printf("show : %d\n", a);
}

int main(void)
{
    show(1);

    FOREACH(show, 1);   // show(1)
    FOREACH(show, 1,2); // show(1); show(2)
    FOREACH(show, 1,2,3,4,5); //
}



























//
