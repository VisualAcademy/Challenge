// ������ ������(�� ������;Relational Operator, Comparative Operator)
// ������ ������: < ����, <= �۰ų� ����, > ŭ, >= ũ�ų� ����, == ����, != �ٸ�
#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = 5;

    printf("%d\n", x == y); // 0: x�� y�� ������
    printf("%d\n", x != y); // 1: x�� y�� �ٸ���
    printf("%d\n", x > y); // 0: x�� y���� ū��
    printf("%d\n", x >= y); // 0: x�� y���� ũ�ų� ������ 
    printf("%d\n", x < y); // 1: x�� y���� ������ 
    printf("%d\n", x <= y); // 1: x�� y���� �۰ų� ������ 

    return 0;
}
