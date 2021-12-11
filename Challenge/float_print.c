// float_print.c
// 실수(float, double, long double) 데이터 형식의 주요 서식 지정자
#include <stdio.h>

int main(void)
{
    float weight = 70.5F;
    double pi = 3140E-3; // 3140 * 10^-3

    printf("weight: %.2f, %e => %g\n", weight, weight, weight);
    printf("pi: %.2f, %e => %g\n", pi, pi, pi); 

    return 0;
}
