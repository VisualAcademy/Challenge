#include <stdio.h>

int main(void)
{
    int intArray[2][3][4] = 
    {
        // 0รþ
        { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } },
        // 1รþ
        { { 13, 14, 15, 16 }, { 17, 18, 19, 20 }, { 21, 22, 23, 24 } }
    };

    for (int i = 0; i < 2; i++) // รþ นÝบน
    {
        for (int j = 0; j < 3; j++) // วเ นÝบน
        {
            for (int k = 0; k < 4; k++) // ฟญ นÝบน
            {
                printf("%2d ", intArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
