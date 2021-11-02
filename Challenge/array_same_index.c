//[?] 3행 3열짜리 2차원 배열에 행과 열이 같으면 1, 다르면 0을 입력한 후 출력하기 
#include <stdio.h>

int main(void)
{
    int arr[3][3]; // 3행 3열 정수 배열 선언 

    for (int i = 0; i < 3; i++) // 행 반복 
    {
        for (int j = 0; j < 3; j++) // 열 반복 
        {
            if (i == j)
            {
                arr[i][j] = 1; // 행과 열이 같으면 1로 채우기 
            }
            else
            {
                arr[i][j] = 0; // 행과 열이 다르면 0으로 채우기 
            }

            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
