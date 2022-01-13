// & 연산자: 비트 AND 연산자(둘 다 1일때만 1)
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10진수: 10
    int y = 0b1100; // 10진수: 12

    // x를 10진수로 표현
    printf("%d\n", x); // 10

    // y를 10진수로 표현
    printf("%d\n", y); // 12

    // x AND y를 10진수로 표현 
    printf("%d\n", x & y); // 8 

    return 0;
}
