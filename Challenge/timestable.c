// ������ ����ϱ� 
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 9; i++) // ���� �ݺ�: ������ ���� ���
    {
        for (int j = 2; j <= 9; j++) // ���� �ݺ�: ������ ���� ���
        {
            printf("%d*%d=%2d ", j, i, j * i); // i�� j�� ��ġ�� �ٲ㼭 ���
        }
        printf("\n"); // ������ 1�� ��� �� �ٹٲ�
    }

    return 0;
}
