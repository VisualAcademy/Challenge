#include <stdio.h>

int main(void)
{
    float money = 88.99;

    printf("전체: %.2f\n", money); // 88.99
    printf("소수부: %d\n", (int)((money - (int)money) * 100)); // 98
    printf("소수부: %d\n", (int)((money - (int)money) * 1000000)); // 989997

    return 0;
}
