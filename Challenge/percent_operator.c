// percent_operator.c
#include <stdio.h>

int main(void)
{
    int f = 10;
    int s = 5;
    int r = f % s; // r �������� (f / s) ����� ������ ���� ����
    printf("%d %% %d = %d\n", f, s, r);

    return 0;
}
