// if 문을 비교 연산자와 함께 사용하기
#include <stdio.h>

int main(void)
{
	int x = 10; // x를 10으로 초기화

	if (x == 10) // x가 10과 같으면 => true(1) 
	{
		printf("x는 %d입니다.\n", x);
	}

	if (x != 20) // x가 20이 아니라면 => true(1)
	{
		printf("x는 20이 아닙니다.\n");
	}

	return 0;
}
