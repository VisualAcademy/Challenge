#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int num1 = 10;
    num1++; // 증가

    int num2 = 10;
    num2--; // 감소

    printf("%d\n", num1); // 11
    printf("%d\n", num2); // 9

    return 0;
}
