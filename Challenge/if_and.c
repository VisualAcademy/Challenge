// if ������ �ѹ��� ���� ���� ������ ó���ϱ�
#include <stdio.h>

int main(void)
{
    int number = 1234;

    //[A] 2���� ������ ��� �����ϸ�
    if (number == 1234 && number >= 1000)
    {
        printf("�½��ϴ�.\n");             // ����
    }

    //[B] 2���� ���� �� �ϳ��� �����ϸ�
    if (number == 1234 || number <= 1000)
    {
        printf("�ϳ��� ���̸� ��\n");    // ����
    }

    return 0;
}
