#include <stdio.h>

int main(void)
{
    int num1 = 4; // 0100, 4
    int num2 = 4; // 0100, 4
    int num3 = 4; // 0100, 4
    int num4 = 4; // 0100, 4
    int num5 = 4; // 0100, 4

    num1 &= 5;  // 0100, 4 & 0101, 5 => 0100, 4
    num2 |= 1;  // 0100, 4 | 0001, 1 => 0101, 5
    num3 ^= 2;  // 0100, 4 ^ 0010, 2 => 0110, 6
    num4 <<= 1; // 0100, 4 << 1 => 1000, 8
    num5 >>= 1; // 0100, 4 >> 1 => 0010, 2

    printf("%d\n", num1); // 4
    printf("%d\n", num2); // 5
    printf("%d\n", num3); // 6
    printf("%d\n", num4); // 8
    printf("%d\n", num5); // 2

    return 0;
}
