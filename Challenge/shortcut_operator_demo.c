//[?] 할당(대입) 연산자: =, +=, -=, *=, /=, %=
#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 5;

    b += a; // 누적: b변수에 a변수의 값을 누적
    printf("%d\n", b); // 8

    // 현재 시점의 b는 8

    b -= a; // 감산: b에서 a를 뺀 후 다시 b에 할당
    printf("%d\n", b); // 5

    return 0;
}
