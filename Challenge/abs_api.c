// ���� ���õ� �Լ�: ���� �Լ��� ����Ͽ� ���� ���ϱ� 
#include <stdio.h>
#include <stdlib.h> // abs(), labs()
#include <math.h> // fabs() 

int main(void)
{
    //[1] abs() �Լ�: ����(int) ������ ������ ����
    printf("%d -> %d\n", -100, abs(-100)); // -100 -> 100

    //[2] labs() �Լ�: ����(long) ������ ������ ����
    printf("%ld -> %ld\n", -1234, labs(-1234)); // -1234 -> 1234

    //[3] fabs() �Լ�: �Ǽ�(double) ������ ������ ����
    printf("%.2f -> %.2f\n", -3.14, fabs(-3.14)); // -3.14 -> 3.14

    return 0;
}
