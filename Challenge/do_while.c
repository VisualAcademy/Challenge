// do while ���� ����Ͽ� "�ȳ��ϼ���." 3�� ����ϱ�
#include <stdio.h>

int main(void)
{
    int count = 0;                  // �ʱ��

    do
    {
        printf("%d\n", count);     // ���๮
        count++;                    // ��ȭ��
    } while (count < 3);            // ���ǽ�

    printf("���� ���� ��: %d\n", count);
    return 0;
}
