#include <stdio.h>

int main(void)
{
    // for ��ø ������ (5 * 5)�� �ݺ��Ͽ� ���ﰢ�� ��� ���
    for (int i = 0; i < 5; i++) // ����(height) �ݺ�
    {
        for (int j = 0; j < 5; j++) // �ʺ�(width) �ݺ�
        {
            if (j <= i) // ��ǥ ��� ���� ó��: i ����ŭ j�� �ݺ��ϸ� �ϳ��� ������
            {
                printf("*"); // ��ǥ ���
            }
        }
        printf("\n"); // �� �ٲ�
    }

    return 0;
}
