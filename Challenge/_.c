#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    float num1;
    double num2;
    long double num3;

    // 서식 지정자(float(%f), double(%lf), long double(%Lf)) 
    scanf("%f %lf %Lf", &num1, &num2, &num3);

    printf("%.15f\n%.15lf\n%.15Lf\n", num1, num2, num3);

    return 0;
}
