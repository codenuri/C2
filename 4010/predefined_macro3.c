#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _alloc_info
{
    char file[256];
    char func[256];
    int  line;
    void *addr;
    size_t size;
};
typedef struct _alloc_info ALLOC_INFO;

ALLOC_INFO info[1000];
int cnt = 0;

void* debug_malloc(size_t sz, const char *file,
                    const char *func, int line)
{
    void *p = malloc(sz);

    strcpy(info[cnt].file, file);
    strcpy(info[cnt].func, func);
    info[cnt].line = line;
    info[cnt].addr = p;
    info[cnt].size = sz;
    ++cnt;
    return p;
}
void debug_free(void *addr )
{
    for ( int i = 0; i < cnt; i++)
    {
        if ( info[i].addr == addr )
        {
            info[i] = info[cnt-1]; // i번째 제거
            free(addr);
            --cnt;
            return;
        }
    }
    printf("debug_free error. bad address\n");
}


void debug_check()
{
    if ( cnt == 0 )
    {
        printf("no memory leak\n");
        return;
    }

    printf("found %d memory leak\n", cnt);

    for ( int i = 0; i < cnt; ++i )
    {
        printf("%s(function %s, line no. %d): addr %p, %d bytes\n",
                info[i].file, info[i].func, info[i].line,
                info[i].addr, info[i].size);
    }
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
    free(p2);
    free(p3+1);
    debug_check();
}














//
