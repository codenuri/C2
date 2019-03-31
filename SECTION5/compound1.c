#include <stdio.h>

struct Point
{
    int x, y;
};

int main()
{
    int n1 = 10;
    int n2 = (int){10};
    
    struct Point pt1 = {1,2};
    struct Point pt2 = (struct Point){1,2};
    
    int x[2] = {1,2};
    int *p1 = x;
    int *p2 = (int[2]){1,2};
}

