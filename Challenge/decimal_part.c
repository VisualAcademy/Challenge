#include <stdio.h>

int main(void)
{
    float money = 88.99;

    printf("傈眉: %.2f\n", money); // 88.99
    printf("家荐何: %d\n", (int)((money - (int)money) * 100)); // 98
    printf("家荐何: %d\n", (int)((money - (int)money) * 1000000)); // 989997

    return 0;
}
