#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ����
#include <stdio.h>

int main(void)
{
    int goal = 0; // ��ǥġ �� ���� ����
    int r = 0;
    printf("10���� 100 ������ ���� �Է�: ");
    r = scanf("%d", &goal);

    for (int i = 1; i <= goal; i++)
    {
        if (i % 3 != 0) // 3�� ����� �ƴ϶�� �ǳʶٱ�
        {
            continue;
        }
        printf("%d\n", i); // 3�� ����� ������ printf() ����
    }

    return 0;
}
