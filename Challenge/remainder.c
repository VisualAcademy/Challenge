// remainder.c
//[?] ������ ������(Remainder Operator): ���� �ƴ� ������ �� ���ϱ�
#include <stdio.h>

int main(void)
{
    int first = 5;
    int second = 3;
    int result = 0;

    result = first % second; // 5 / 3 => ������ ���� 2�� ��ȯ

    printf("������ ��: %d\n", result); // ��: 1, ������: {2}

    return 0;
}
