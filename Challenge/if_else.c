// 조건이 같은지 다른지 확인하기
#include <stdio.h>

int main(void)
{
    const double PI = 3.14;

    if (PI == 3.14) //[!] 조건식
    {
        printf("PI는 3.14입니다.\n");        // 참일 때 실행
    }
    else
    {
        printf("PI는 3.14가 아닙니다.\n");   // 거짓일 때 실행
    }

    return 0;
}
