// 2차원 배열을 2중 for 문으로 반복해서 출력하기 
#include <stdio.h>

int main(void)
{
    int i, j;
    int arr[2][3] = { 1, 2, 3, 4, 5, 6 }; // 안 쪽 중괄호 생략 가능

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
