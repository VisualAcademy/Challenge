#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("정수 입력: _\b");
    scanf("%d", &a);

    //[1] if문
    if (a % 2 == 0) // 짝수라면...
    {
        printf("짝수\n");
    }

    //[2] else문
    if (a % 2 != 0) // 홀수
    {
        printf("홀수\n");
    }
    else
    {
        printf("짝수\n");
    }

    //[3] else if문
    if (a % 3 == 0)
    {
        printf("3의 배수\n");
    }
    else if (a % 5 == 0)
    {
        printf("5의 배수\n");
    }
    else if (a % 7 == 0)
    {
        printf("7의 배수\n");
    }
    else
    {
        printf("3, 5, 7의 배수가 아닌 수\n");
    }

    return 0;
}
