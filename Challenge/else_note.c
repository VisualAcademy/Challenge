// else 문 사용하기 
#include <stdio.h>

int main(void)
{
    if (1 != 1) // 조건식 => 거짓(false) 
    {
        //printf("조건식이 참일 때 현재 문장이 실행됩니다.\n");
    }
    else // 조건이 거짓일 때 실행
    {
        printf("조건식이 거짓이기에 현재 문장이 실행됩니다.\n");
    }

    return 0;
}
