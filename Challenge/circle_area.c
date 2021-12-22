#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double PI = 3.14; // 원주율 
    int radius = 0; // 원의 반지름 저장할 변수 
    int area = 0; // 원의 넓이 저장할 변수
    int _ = 0; // 버림(Discards)

    printf("반지름 입력: ");
    _ = scanf("%d", &radius);

    area = PI * radius * radius;

    printf("원의 넓이: %d\n", area);

    return 0;
}
