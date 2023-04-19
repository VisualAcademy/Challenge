#include <stdio.h>

int main(void)
{
    // [1] 모든 요소를 초기화
    int all[5] = { 1, 2, 3, 4, 5 };

    // [2] 일부 값만 초기화하고 나머지 요소는 0으로 초기화
    int zero[5] = { 1, 2, /* 나머지 요소는 자동으로 0으로 초기화 */ };

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", all[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", zero[i]);
    }
    printf("\n");

    return 0;
}
