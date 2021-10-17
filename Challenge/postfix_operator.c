//[?] 후위(Postfix) 증감 연산자: 우선순위가 낮음
#include <stdio.h>

int main(void)
{
    int x = 3;

    int y = x++; // y에 x 대입 후, x를 1 증가

    printf("%d\n", y); // 3

    return 0;
}
