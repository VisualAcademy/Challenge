//[?] 1 ~ 100���� 3�� ����̰� �׸��� 4�� ����� ������ ��
#include <stdio.h>

int main(void)
{
    int sum = 0;

    //[!] Process : �˰���(Algorithm): �־��� ���� + �־��� ����
    int i = 1;                                  // �ʱ��
    do
    {
        if (i % 3 == 0 && i % 4 == 0)           // ���͸�(���ǽ�)
        {
            sum += i;                           // ���๮(����)
        }
        i++;                                    // ������
    } while (i <= 100);                         // ���ǽ�(���� ��)

    printf("%d\n", sum); // 432

    return 0;
}
