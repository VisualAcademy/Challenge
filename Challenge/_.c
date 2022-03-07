// 비트 연산자: &, |, ~, ^
#include <stdio.h>

int main(void)
{
    int x = 10; // 1010
    int y = 6; // 0110

    printf("%d\n", x & y); // 2

    printf("%d\n", x | y); // 14

    printf("%d\n", x ^ y); // 12

    // 2의 보수법에 의해서 1010+1 그리고 부호를 -로 -1011 => -11
    printf("%d\n", ~x); // -11

    return 0;
}
