// float_print.c
// �Ǽ�(float, double, long double) ������ ������ �ֿ� ���� ������
#include <stdio.h>

int main(void)
{
    float weight = 70.5F;
    double pi = 3140E-3; // 3140 * 10^-3

    printf("weight: %.2f, %e => %g\n", weight, weight, weight);
    printf("pi: %.2f, %e => %g\n", pi, pi, pi); 

    return 0;
}
