// 카운트 증가 프로그램
#include <stdio.h>

int main(void)
{
    int count = 1; // 초기식
    while (count <= 3) // 조건식
    {
        printf("카운트: %d\n", count); // 실행문
        count++; // 증감식
    }

    return 0;
}
