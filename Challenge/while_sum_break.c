// 1���� 10���� ������ ���� ���س��� �� ���� 22 �̻��� �Ǹ� ���ߴ� ���α׷�
#include <stdio.h>

int main(void)
{
    int goal = 22; // ��ǥġ
    int sum = 0; 

    int i = 1;
    while (i <= 10)
    {
        sum += i;

        if (sum >= goal)
        {
            break; // �ݺ��� Ż��
        }

        i++;
    }

    printf("1���� %d������ ���� %d�̰�, ", i, sum);
    printf("��ǥġ %d�̻��� �޼��߽��ϴ�.\n", goal);

    return 0;
}
