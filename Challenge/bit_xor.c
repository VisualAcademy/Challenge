// ^ 연산자: 비트 XOR 연산자(서로 다르면 1)
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10진수: 10
    int y = 0b1100; // 10진수: 12

    // x를 십진수로 표현
    printf("%d\n", x); // 10

    // y를 십진수로 표현
    printf("%d\n", y); // 12

    printf("--\n");

    // x XOR y를 십진수로 표현 
    printf("%2d\n", x ^ y); // 6

    return 0;
}
