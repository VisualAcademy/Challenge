// 실수(floating-point)를 정수부(integer part)와 소수부(fractional part)로 분리하기
#include <stdio.h>
#include <math.h> // modf(), modff(), modfl()

int main(void)
{
    double d, i, f;

    d = 3.14; // 원본 데이터
    f = modf(d, &i); // 정수부와 소수부 분리하기

    printf("%.2f의 정수부는 %.f이고 소수부는 %.2f입니다.", d, i, f);

    return 0;
}
