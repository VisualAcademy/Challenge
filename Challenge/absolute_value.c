// absolute_value.c
//[?] 3항 연산자(조건 연산자)를 사용하여 절댓값 구하기 
#include <stdio.h>

int main(void)
{
    int num = -21; // 음수 값을 저장
    int abs = (num < 0) ? -num : num; // 3항 연산자로 음수만 부호 변환
    printf("%d의 절댓값: %d\n", num, abs);

    return 0;
}
