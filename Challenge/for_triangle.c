//[?] for ���� ����Ͽ� ��ǥ ��ȣ�� �ﰢ�� �����
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++) // ���� �ݺ�
    {
        for (int j = 0; j < i; j++) // ���� �ݺ�: ���� ����(j)�� �°� ��ǥ ��� 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
