#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int menu = 0;
    int price = 0;

    printf("�޴��� �������ּ���.\n");
    printf("1. �Ƹ޸�ī�� 2. �� 3. ��ī\n");

    scanf("%d", &menu);

    if (menu == 1)
    {
        price = 4100; // �Ƹ޸�ī�� ����
    }
    else if (menu == 2)
    {
        price = 4600; // �� ���� 
    }
    else if (menu == 3)
    {
        price = 5100; // ��ī ���� 
    }
    else
    {
        price = 0; // ���� �޴�
    }

    printf("����: %d\n", price);

    return 0;
}
