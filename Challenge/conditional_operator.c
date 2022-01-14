// conditional_operator.c
//[?] 3항 연산자(조건 연산자) 사용하기 
#include <stdio.h>

int main(void)
{
    int num = 3;

    // num 변수가 짝수면 result 변수에 "짝수" 담고 그렇지 않으면 "홀수" 담기 
    const char* result = (num % 2 == 0) ? "짝수" : "홀수";

    printf("%d은(는) %s입니다.\n", num, result);

    return 0;
}
