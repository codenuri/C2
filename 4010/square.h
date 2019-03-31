// 함수 선언
// extern "C" : C++ 컴파일러에게
//            C함수라고 알려줌
#ifdef __cplusplus
extern "C" {
#endif

int square(int a);

#ifdef __cplusplus
}
#endif
