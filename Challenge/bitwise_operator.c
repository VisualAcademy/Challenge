// 비트 연산자: &, |, ~, ^
#include <stdio.h>

int main(void)
{
    int a = 10; // 1010
    int b = 6; // 0110

    printf("%d\n", a & b); // 2

    printf("%d\n", a | b); // 14

    printf("%d\n", a ^ b); // 12

    // 2의 보수법에 의해서 1010+1 그리고 부호를 -로 -1011 => -11
    printf("%d\n", ~a); // -11

    return 0;
}
