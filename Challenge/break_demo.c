#include <stdio.h>

int main(void)
{
    // break ��: for, while, do ���� ���������� ����
    for (int i = 0; i < 100; i++)
    {
        if (i == 5)
        {
            break; // i == 5�� �� break ������ for �� ����
        }
        printf("%d�� �ݺ�\t", (i + 1));
    }
    printf("\n");

    return 0;
}
