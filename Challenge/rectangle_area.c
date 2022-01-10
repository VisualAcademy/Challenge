// rectangle_area.c
// C 언어 코드 샘플 - 사각형의 넓이 구하기 - 사각형의 넓이는 밑변 곱하기 높이
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // 변수 선언 및 초기화 
    double width = 0.0; // 밑변
    double height = 0.0; // 높이
    double area = 0.0; // 넓이
    int _ = 0; // 버림(Discards)

    // 사용자로부터 데이터 입력
    printf("밑변: "); _ = scanf("%lf", &width);
    printf("높이: "); _ = scanf("%lf", &height);

    // 처리
    area = width * height;

    // 출력 
    printf("사각형의 넓이: %.2lf\n", area);

    return 0;
}
