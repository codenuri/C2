#include <stdio.h>
#include <stdlib.h>

int cnt = 0;

void* debug_malloc(size_t sz, const char *file,
                    const char *func, int line)
{
    void *p = malloc(sz);
    ++cnt;
    printf("debug_malloc\n");
    return p;
}
void debug_free(void *addr )
{
    free(addr);
    printf("debug_free\n");
    --cnt;
}
#define malloc(sz)  \
    debug_malloc(sz, __FILE__, __func__, __LINE__)

#define free(addr)  debug_free(addr)

int main(void)
{
    int *p1 = (int*)malloc(sizeof(int)*10);
    int *p2 = (int*)malloc(sizeof(int)*10);
    int *p3 = (int*)malloc(sizeof(int)*10);

    free(p1);
    //free(p2);
    free(p3);
}
