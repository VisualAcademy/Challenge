// get_sum_two_number.c
// C ��� �ڵ� ���� - �� ���� ���� ���ϴ� �Լ� 
#include <stdio.h>

// �� ���� ���� ���ϴ� �Լ�
double get_sum(double x, double y)
{
    double r = x + y;
    return r;
}

int main(void)
{
    double result = get_sum(3.0, 0.14);
    printf("%lf\n", result); // 3.14

    return 0;
}
