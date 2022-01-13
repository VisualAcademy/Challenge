// | 연산자: 비트 OR 연산자(하나라도 1이면 1)
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10진수: 10
    int y = 0b1100; // 10진수: 12

    // x를 이진수에서 십진수로 출력
    printf("%d\n", x); // 10

    // y를 이진수에서 십진수로 출력
    printf("%d\n", y); // 12

    printf("--\n");

    // x OR y를 십진수로 표현 
    printf("%d\n", x | y); // 14

    return 0;
}
