//[?] do ���� ����Ͽ� 1���� 5������ ��
#include <stdio.h>

int main(void)
{
    int sum = 0;

    int i = 1;                  // �ʱ��
    do
    {
        sum += i;               // ���๮
        i++;                    // ������
    } while (i <= 5);           // ���ǽ�
    printf("�հ�: %d\n", sum);   // 15

    return 0;
}
