#define MAX 256

#define TOSTR2(x) #x
#define TOSTR(x) TOSTR2(x)

#define LOG( desc )		\
	( __FILE__ "(" TOSTR(__LINE__) "): " desc )

int main(void)
{
	TOSTR(AAA);  // "AAA"
	TOSTR(MAX);  // "MAX"  ? "256"
	TOSTR(__LINE__); // "__LINE__" ? "9"


	#pragma message LOG("이 부분은 언제 다시 수정해야 합니다.")
}
