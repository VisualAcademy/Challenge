#include <stdio.h>

int main(void)
{
    float money = 88.99;

    printf("��ü: %.2f\n", money); // 88.99
    printf("�Ҽ���: %d\n", (int)((money - (int)money) * 100)); // 98
    printf("�Ҽ���: %d\n", (int)((money - (int)money) * 1000000)); // 989997

    return 0;
}
