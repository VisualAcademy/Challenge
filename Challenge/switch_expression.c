#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("1�Դϴ�.\n"); // x�� 1�� �� ����
            break;
        case 2:
            printf("2�Դϴ�.\n"); // x�� 2�� �� ����
            break;
        default:
            printf("1�� 2�� �ƴմϴ�.\n"); // �⺻��
            break;
    }

    return 0;
}
