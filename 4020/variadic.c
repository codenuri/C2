#define CONCATENATE(arg1, arg2)   CONCATENATE1(arg1, arg2)
#define CONCATENATE1(arg1, arg2)  CONCATENATE2(arg1, arg2)
#define CONCATENATE2(arg1, arg2)  arg1##arg2

#define FOR_EACH_1(what, x)         \
    what(x)

#define FOR_EACH_2(what, x, ...)    \
    what(x);                        \
    FOR_EACH_1(what, __VA_ARGS__);

#define FOR_EACH_3(what, x, ...)    \
    what(x);                        \
    FOR_EACH_2(what, __VA_ARGS__);

#define FOR_EACH_4(what, x, ...)    \
    what(x);                        \
    FOR_EACH_3(what,  __VA_ARGS__);

#define FOR_EACH_5(what, x, ...)    \
    what(x);                        \
    FOR_EACH_4(what,  __VA_ARGS__);

#define FOR_EACH_6(what, x, ...)    \
  what(x);                          \
  FOR_EACH_5(what,  __VA_ARGS__);

#define FOR_EACH_7(what, x, ...)    \
    what(x);                        \
    FOR_EACH_6(what,  __VA_ARGS__);

#define FOR_EACH_8(what, x, ...)    \
    what(x);                        \
    FOR_EACH_7(what,  __VA_ARGS__);

#define FOR_EACH_NARG(...) FOR_EACH_NARG_(__VA_ARGS__, FOR_EACH_RSEQ_N())
#define FOR_EACH_NARG_(...) FOR_EACH_ARG_N(__VA_ARGS__)
#define FOR_EACH_ARG_N(_1, _2, _3, _4, _5, _6, _7, _8, N, ...) N
#define FOR_EACH_RSEQ_N() 8, 7, 6, 5, 4, 3, 2, 1, 0

#define FOR_EACH_(N, what, ...) CONCATENATE(FOR_EACH_, N)(what, __VA_ARGS__)
#define FOR_EACH(what, ...) FOR_EACH_(FOR_EACH_NARG(__VA_ARGS__), what, __VA_ARGS__)
#include <stdio.h>

void foo(int a)
{
	printf("%d\n", a);
}

int main()
{
    FOR_EACH(foo, 1,2,3,4,5,6,7);
//    FOR_EACH_(5, foo, 1,2,3,4,5);

    //int n = FOR_EACH_NARG(1,2,3,4,5, 7, 10, 22);
    //printf("%d\n", n);

//    FOR_EACH(10, foo,  1,2,3,4,5,6,7,8,9,10);
//	FOR_EACH_1(foo, 1);
//	FOR_EACH_2(foo, 1, 2);
//	FOR_EACH_3(foo, 1, 2,3);
}
