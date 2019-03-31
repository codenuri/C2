
struct Point
{
    int x, y;
};

int main()
{
    int x[3] = {1,2,3};
    int *p1 = x;
    p1[0] = 10;
    
    int *p2;
    {
        p2 = (int[3]){1,2,3};
        p2[0] = 10;
    }
    
    struct Point *p3 = &(struct Point) {1,2};
    p3->x = 10;
    p3->y = 20;

    
    int * p4 = &10; // error
    int * p5 = &(int){10}; // ok
    
}





