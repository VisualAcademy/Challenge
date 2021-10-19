// !(NOT) 연산자를 if 문의 조건식에서 사용하기
#include <stdio.h>

int main(void)
{
	int bln = 0; // false(0) 

	if (!bln) // ~가 아니라면 ~를 실행해라
	{
		printf("bln: false(0) -> ! -> true(1)\n");
	}

	return 0;
}
