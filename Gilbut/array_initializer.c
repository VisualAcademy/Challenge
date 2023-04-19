// 배열 초기화
#include <stdio.h>

int main(void)
{
    int num = { 1234 }; // 배열 초기화

    double numbers[] = { 1234, 3.14 }; // 배열 초기화

    printf("%d\n", num); // 1234
    printf("%lf, %lf\n", numbers[0], numbers[1]); // 1234.000000, 3.140000

    return 0;
}
