#include <stdio.h>

int main(void)
{
    // for ��ø ������ (5 * 5)�� �ݺ��Ͽ� ���ﰢ�� ��� ���
    for (int height = 0; height < 5; height++) // ����(height) �ݺ�
    {
        for (int width = 0; width < 5; width++) // �ʺ�(width) �ݺ�
        {
            // ��ǥ ��� ���� ó��: height ����ŭ width�� �ݺ��ϸ� �ϳ��� ������
            if (width <= height)
            {
                printf("*"); // ��ǥ ���
            }
        }
        printf("\n"); // �� �ٲ�
    }

    return 0;
}
