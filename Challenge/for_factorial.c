//[?] for 문을 사용하여 1부터 4까지의 팩토리얼 값을 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    int fact = 0;

    for (int i = 1; i <= 4; i++) // 1부터 4까지 팩토리얼 구하기 
    {
        printf("%d! -> ", i);
        fact = 1; // 1로 초기화
        for (int j = 1; j <= i; j++) // 1부터 i까지 반복해서 곱해서 누적하기 
        {
            fact = fact * j; // (((1 * 1) * 2) * 3) * 4
        }
        printf("%2d\n", fact);
    }

    return 0;
}
