// judge_digit_number.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int digit = 0; // 입력 받을 10~99 사이의 정수
    int tens = 0; // 10의 자리 정수
    int unit = 0; // 1의 자리 정수
    int sum = 0;  // (10의 자리 정수) + (1의 자리 정수)

    int _ = scanf("%d", &digit);

    tens = digit / 10; // 10으로 나누어 1의 자리 버림
    unit = digit % 10; // 10으로 나눈 몫으로 1의 자리만 얻기

    sum = tens + unit; // (10의 자리 정수) + (1의 자리 정수)

    printf("%d\n", sum); // 각 자릿수 합계 출력

    return 0;
}
