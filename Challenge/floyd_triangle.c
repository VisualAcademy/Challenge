#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int rows = 0;
    int count = 1;

    printf("����� �� �� �Է�: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}
