#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("1입니다.\n"); // x가 1일 때 실행
            break;
        case 2:
            printf("2입니다.\n"); // x가 2일 때 실행
            break;
        default:
            printf("1과 2가 아닙니다.\n"); // 기본값
            break;
    }

    return 0;
}
