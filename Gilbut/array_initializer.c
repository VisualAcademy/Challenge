// �迭 �ʱ�ȭ
#include <stdio.h>

int main(void)
{
    int num = { 1234 }; // �迭 �ʱ�ȭ

    double numbers[] = { 1234, 3.14 }; // �迭 �ʱ�ȭ

    printf("%d\n", num); // 1234
    printf("%lf, %lf\n", numbers[0], numbers[1]); // 1234.000000, 3.140000

    return 0;
}
