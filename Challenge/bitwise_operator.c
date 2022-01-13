// 비트 연산자: &, |, ~, ^
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10진수: 10
    int y = 0b0110; // 10진수: 6

    int _and = x & y; // 0010 => 2
    printf("%d\n", _and); // 2

    int _or = x | y; // 1110 => 14
    printf("%d\n", _or); // 14

    int _xor = x ^ y; // 1100 => 12
    printf("%d\n", _xor); // 12

    // 2의 보수법에 의해서 1010+1 그리고 부호를 -로 -1011 => -11
    int _not = ~x; // ~~~~0101 => -11
    printf("%d\n", _not); // -11

    return 0;
}
