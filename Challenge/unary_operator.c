//[?] ���� ������(Unary Operator): +, -
#include <stdio.h>

int main(void)
{
    int value = 0;

    value = 8; // value�� 8 ����
    value = +value; // value�� ���� + ��ȣ�� �ٿ� �ִ� �״�� ǥ��
    printf("%d\n", value); // +8

    value = -8; // value�� -8 ����
    value = +value; // value�� ���� + ��ȣ�� �ٿ� �ִ� �״�� ǥ��
    printf("%d\n", value); // -8

    value = 8; // value�� 8 ����
    value = -value; // value�� ���� - ��ȣ�� �ٿ� ��ȣ�� �ݴ�� ����
    printf("%d\n", value); // -8

    value = -8; // value�� -8 ����
    value = -value; // value�� ���� - ��ȣ�� �ٿ� ��ȣ�� �ݴ�� ����
    printf("%d\n", value); // +8

    return 0;
}
