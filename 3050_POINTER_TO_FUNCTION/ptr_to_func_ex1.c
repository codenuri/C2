#include <stdio.h>

void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Sort(int *arr, int sz, int(*cmp)(int, int) )
{
    for ( int i = 0; i < sz-1; i++)
        for ( int j = i + 1; j < sz; j++ )

            if ( cmp(arr[i], arr[j]) > 0)
            //if ( arr[i] > arr[j] )
                Swap( &arr[i], &arr[j] );
}

int cmp1(int a, int b) { return a - b;}
int cmp2(int a, int b) { return b - a;}

int main(void)
{
    double x[10] = { 1,3,5,7,9,2,4,6,8,10};

    Sort(x, 10, &cmp1 );

    for ( int i = 0; i < 10; i++ )
        printf("%d ", x[i]);
}






//
