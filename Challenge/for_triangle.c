//[?] for 문을 사용하여 별표 기호로 삼각형 만들기
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++) // 행 번호에 맞게 별표 출력(1부터 5까지) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
