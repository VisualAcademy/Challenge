// judge_digit_number.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int digit = 0; // �Է� ���� 10~99 ������ ����
    int tens = 0; // 10�� �ڸ� ����
    int unit = 0; // 1�� �ڸ� ����
    int sum = 0;  // (10�� �ڸ� ����) + (1�� �ڸ� ����)

    int _ = scanf("%d", &digit);

    tens = digit / 10; // 10���� ������ 1�� �ڸ� ����
    unit = digit % 10; // 10���� ���� ������ 1�� �ڸ��� ���

    sum = tens + unit; // (10�� �ڸ� ����) + (1�� �ڸ� ����)

    printf("%d\n", sum); // �� �ڸ��� �հ� ���

    return 0;
}
