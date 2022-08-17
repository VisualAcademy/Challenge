//[?] for 문을 사용하여 별표 기호로 삼각형 만들기
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++) // 세로 반복
    {
        for (int j = 0; j < i; j++) // 가로 반복: 가로 개수(j)에 맞게 별표 출력 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
