// ternary_operator.c
//[?] 조건 연산자를 사용하여 문자 크기 비교하기
#include <stdio.h>

int main(void)
{
    const char* result1 =
        ('A' < 'B') ? "'A'는 'B'보다 작습니다." : "A B C 순서로 커집니다.";
    const char* result2 =
        ('Z' < 'a')
        ?
        "'Z'는 'a'보다 작습니다."
        :
        "대문자보다 소문자가 더 큽니다.";

    printf("%s\n", result1); // 'A'는 'B'보다 작습니다.
    printf("%s\n", result2); // 'Z'는 'a'보다 작습니다.

    return 0;
}
