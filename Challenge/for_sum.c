//[?] 1���� 3������ �հ� ���ϱ�
#include <stdio.h>

int main(void)
{
    int n = 3; // n���� �ݺ�
    int sum = 0; // �հ� ����

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; // �ݺ��ϸ鼭 i ���� ��� ���ؼ� �հ�(SUM) ��� ����
    }

    printf("1���� %d������ ��: %d\n", n, sum); // 1���� 3������ ��: 6
}
