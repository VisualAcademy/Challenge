#include <stdio.h>

int main(void)
{
    int scores[3][4] =
    {
        { 90, 100, 0, 0 },
        { 80, 90, 0, 0 },
        { 100, 80, 0, 0 }
    };

    for (int i = 0; i < 3; i++)
    {
        scores[i][2] = scores[i][0] + scores[i][1]; // SUM
        scores[i][3] = scores[i][2] / 2; // AVERAGE
    }

    printf("국어 영어 합계 평균\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
