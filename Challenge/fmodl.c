#include <stdio.h>
#include <math.h> // fmodf, fmod, fmodl 함수가 선언된 헤더 파일 

int main(void)
{
    float f1 = 10.0f;
    float f2 = 3.0f;
    printf("%f\n", fmodf(f1, f2)); // 1.000000

    double d1 = 10.0;
    double d2 = 3.0;
    printf("%lf\n", fmod(d1, d2)); // 1.000000

    long double ld1 = 10.0l;
    long double ld2 = 3.0l;
    printf("%Lf\n", fmodl(ld1, ld2)); // 1.000000

    return 0;
}
