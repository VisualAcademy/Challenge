// 구구단 출력하기 
#include <stdio.h>

int main(void)
{
    for (int i = 2; i <= 9; i++)
    {
        printf("%4d단  ", i);
    }
    printf("\n");

    for (int i = 1; i <= 9; i++) // 행 반복: 구구단 세로 출력
    {
        for (int j = 2; j <= 9; j++) // 열 반복: 구구단 가로 출력
        {
            printf("%d*%d=%2d  ", j, i, j * i); // i와 j의 위치를 바꿔서 출력
        }
        printf("\n"); // 한 줄 출력 후 줄바꿈
    }

    return 0;
}
