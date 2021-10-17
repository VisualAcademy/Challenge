//[?] 전위(Prefix) 증감 연산자: 우선순위가 높음
#include <stdio.h>

int main(void)
{
    int i = 3; // i 변수를 3으로 초기화 

    int j = ++i; // 3에서 4로 증가 후 j 변수에 4를 할당

    printf("%d\n", j); // 4

    return 0;
}
