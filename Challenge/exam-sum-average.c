// 입력받은 두 수의 합계와 평균 구하기 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    long sum = 0; 
    double avg = 0.0; 

    int _ = scanf("%d %d", &num1, &num2);

    sum = num1 + num2; // 합계
    avg = sum / 2.0; // 평균

    printf("합계: %ld\n", sum);
    printf("평균: %.1lf\n", avg); 

    return 0;
}
