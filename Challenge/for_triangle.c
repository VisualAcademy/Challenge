//[?] for ���� ����Ͽ� ��ǥ ��ȣ�� �ﰢ�� �����
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++) // �� ��ȣ�� �°� ��ǥ ���(1���� 5����) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
