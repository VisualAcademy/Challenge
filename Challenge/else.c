// else 문을 사용하여 두 개의 조건 처리하기
#include <stdio.h>

int main(void)
{
	int score = 59;

	if (score >= 60)
	{
		printf("합격\n"); // 조건식이 참일 때 실행
	}
	else
	{
		printf("불합격\n"); // 조건식이 거짓일 때 실행
	}

	return 0;
}
