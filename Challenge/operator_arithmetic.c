// operator_arithmetic.c
// +, -, *, /, %
#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;

    printf("%d\n", a + b); // ���ϱ�: 8
    printf("%d\n", a - b); // ����: 2
    printf("%d\n", a * b); // ���ϱ�: 15
    printf("%d\n", a / b); // ��: 1  
    printf("%d %% %d = %d\n", a, b, (a % b)); // ������: 5 % 3 = 2

    return 0;
}
