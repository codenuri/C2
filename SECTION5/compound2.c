struct Point
{
    int x, y;
};

void foo(int *parr) {}
void goo(struct Point pt) {}

int main()
{
    int x[3] = {1,2,3};
    foo(x);
    
    foo( (int[3]){1,2,3} );
    
    
    struct Point pt = { 1, 1};
    goo(pt);
    
    goo( (struct Point) { 1,1});
    
}

