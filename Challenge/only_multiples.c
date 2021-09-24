#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고 에러 방지
#include <stdio.h>

int main(void)
{
    int goal = 0; // 목표치 값 받을 변수
    int r = 0;
    printf("10부터 100 사이의 정수 입력: ");
    r = scanf("%d", &goal);

    for (int i = 1; i <= goal; i++)
    {
        if (i % 3 != 0) // 3의 배수가 아니라면 건너뛰기
        {
            continue;
        }
        printf("%d\n", i); // 3의 배수일 때에만 printf() 실행
    }

    return 0;
}
