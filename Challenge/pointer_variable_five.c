// pointer_variable_five.c
/*
    ��(Value)�� ����/�迭
    ������(����;Reference)�� ����/�迭
*/
#include <stdio.h>

int main(void)
{
    // Value Type ����
    int a = 10;

    // Reference Type ����: ������ ����
    int* pa;

    // ���� �߰�
    pa = &a; // ������ ������ �ּ� ����

    *pa = 20; // �������� ����Ͽ� ������ ������ �����ϴ� ������ �� ����

    // ���� ���� ǥ��
    printf("[1] %d\n", a); // 20
    printf("[2] %p\n", &a); // �޸� �ּ�: 000000FFC78FFC24 ����: ��� �ٲ�� �κ�

    // �������� ���� ǥ��
    printf("[3] %p\n", pa); // �޸� �ּ�: 000000FFC78FFC24 ����
    printf("[4] %p\n", &pa); // ������ ������ �޸� �ּ�: 000000FFC78FFC48 ����
    printf("[5] %d\n", *pa); // 20

    return 0;
}
