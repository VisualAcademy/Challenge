// continue��: �ݺ������� �Ʒ� ���๮�� �������� �ʰ� ���� �������� �̵�
#include <stdio.h>

int main(void)
{
    //[!] 1~100���� ���� �� 3�� ����� ������ ���� ��
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue; // 3�� ����̸� for ���� [i++] �ڵ� �������� �̵��ϱ� 
        }
        sum += i;
    }

    printf("SUM: %d\n", sum); // 3367

    return 0;
}
