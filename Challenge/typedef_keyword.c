// typedef Ű���� ����ϱ� 
#include <stdio.h>

// typedef Ű����� double Ű���带 number Ű����� ����ϵ��� ���� 
typedef double number; // double�� number �̸����ε� ���

int main(void)
{
    number num1 = 1234.56; // double num1 = 1234.56; => ������ �ڵ�

    printf("%.2lf\n", num1); // 1234.56

    return 0;
}
