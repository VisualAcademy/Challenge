#include <stdio.h>

int main(void)
{
    int i = 0; // 초기식
    loop_body:
        printf("C Language\n"); // 실행문
        i++; // 변화식
    if (i < 3) // 조건식 
    {
        goto loop_body; // loop_body 레이블로 이동
    }

    return 0; 
}