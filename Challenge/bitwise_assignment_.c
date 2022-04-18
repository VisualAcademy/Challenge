// bitwise_assignment.c
#include <stdio.h>

int main(void)
{
    int num1 = 4; // 4: 0100
    int num2 = 4; // 4: 0100
    int num3 = 4; // 4: 0100
    int num4 = 4; // 4: 0100
    int num5 = 4; // 4: 0100

    num1 &= 5;  // 4(0100) & 5(0101) => 4(0100)
    num2 |= 1;  // 4(0100) | 1(0001) => 5(0101)
    num3 ^= 2;  // 4(0100) ^ 2(0010) => 6(0110)
    num4 <<= 1; // 4(0100) << 1 => 8(1000)
    num5 >>= 1; // 4(0100) >> 1 => 2(0010)

    printf("%d\n", num1); // 4
    printf("%d\n", num2); // 5
    printf("%d\n", num3); // 6
    printf("%d\n", num4); // 8
    printf("%d\n", num5); // 2

    return 0;
}
