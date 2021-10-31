// ~ 연산자: 비트 NOT 연산자(1 <-> 0, 비트 반전)
#include <stdio.h>

int main(void)
{
    int x = 0b00001010; // 10

    // x를 십진수로 표현
    printf("~%d\n", x); // 10

    // NOT x를 십진수로 표현 
    printf("%3d\n", ~x); // -11

    return 0;
}
