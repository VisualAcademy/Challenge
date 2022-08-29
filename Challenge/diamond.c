#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int count = 0; // ���� ���� 
    int blank = 0; // ���� ���� 
    int block = 0; // ��ǥ ���� 
    int height = 0; // ���� ��ȣ

    scanf("%d", &count); // ���̾Ƹ�� �ﰢ�� ���� ���� �Է�

    // �ﰢ�� ��� �׷�
    for (int i = 0; i < count; i++)
    {
        height = i + 1; // ���� ��ȣ ��� 
        blank = count - height; // ����� ���� ���� ���  
        block = 2 * i + 1; // ����� ��ǥ ���� ���

        // ���� ���
        for (int j = 0; j < blank; j++)
        {
            printf(" ");
        }

        // ��ǥ ���
        for (int k = 0; k < block; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    // ���ﰢ�� ��� �׷�: �ʱ���� int i = 1�� �����ؼ� �ϳ� �ǳʶ�
    for (int i = 1; i < count; i++) // i �ݺ�: �Էµ� ���� ������ŭ �ݺ�
    {
        height = i + 1; // ���� ��ȣ ���(�ݺ������� ���� i�� 1���� �����ϸ� �ʿ����)
        block = (count * 2) - (height * 2 - 1); // ����� ��ǥ ���� ���

        // ���� ���: (j < i) ���ǿ� ���� ���� ������ 0, 1, 2�� ����
        for (int j = 0; j < i; j++) // j �ݺ�
        {
            printf(" ");
        }

        // ��ǥ ���: ��ǥ ������ (count * 2) - (height * 2 - 1) => (..., 5, 3, 1)
        for (int j = 0; j < block; j++) // k �ݺ�: ��ǥ ������ŭ �ݺ�
        {
            printf("*");
        }

        printf("\n"); // ���� �ٹٲ�
    }

    return 0;
}
