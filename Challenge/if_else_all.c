#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("���� �Է�: _\b");
    scanf("%d", &a);

    //[1] if��
    if (a % 2 == 0) // ¦�����...
    {
        printf("¦��\n");
    }

    //[2] else��
    if (a % 2 != 0) // Ȧ��
    {
        printf("Ȧ��\n");
    }
    else
    {
        printf("¦��\n");
    }

    //[3] else if��
    if (a % 3 == 0)
    {
        printf("3�� ���\n");
    }
    else if (a % 5 == 0)
    {
        printf("5�� ���\n");
    }
    else if (a % 7 == 0)
    {
        printf("7�� ���\n");
    }
    else
    {
        printf("3, 5, 7�� ����� �ƴ� ��\n");
    }

    return 0;
}
