#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int height = 0; // ���� ���� 
    int count = 1; // ī��Ʈ�� 1���� ��� 

    printf("����� ���� �� �Է�: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) // ����(height) �ݺ�
    {
        for (int j = 0; j <= i; j++) // �ʺ�(width) �ݺ�
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}
