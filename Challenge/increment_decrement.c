#include <stdio.h>

int main(void)
{
    int num1 = 10;
    num1++; // ����, num1 += 1; �Ǵ� num1 = num1 + 1;�� ����

    int num2 = 10;
    num2--; // ����, num2 -= 1; �Ǵ� num2 = num2 - 1;�� ����

    printf("%d\n", num1); // 11
    printf("%d\n", num2); // 9

    return 0;
}
