#include <stdio.h>

int main(void)
{
    //[!] while ���� ����Ͽ� ¦���� ��
    int sum = 0;

    int i = 1;                  // �ʱ��
    while (i <= 100)            // ���ǽ�
    {
        if (i % 2 == 0)         // ���͸�(����ó��)
        {
            sum += i;           // ���๮ 
        }
        i++;                    // ������
    }

    printf("1���� 100���� ¦���� ��: %d\n", sum);

    return 0;
}
