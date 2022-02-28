#include <stdio.h>

int main(void)
{
    int num1 = 10;
    num1++; // 증가, num1 += 1; 또는 num1 = num1 + 1;과 같음

    int num2 = 10;
    num2--; // 감소, num2 -= 1; 또는 num2 = num2 - 1;과 같음

    printf("%d\n", num1); // 11
    printf("%d\n", num2); // 9

    return 0;
}
