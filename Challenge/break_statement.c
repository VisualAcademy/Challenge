#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++) // 1���� 10���� �ݺ�
    {
        printf("%d\n", i); // �ε��� ���� i ���

        if (i == 3)
        {
            break; // ���� �ڵ带 ������ ���� for ���� ������
        }
    }

    return 0;
}
