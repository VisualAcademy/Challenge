// ���� ū ���� ã��
#include <stdio.h>

int main(void)
{
    int arr[] = { 50, 23, 77, 12, 35, 64 }; // ���� �迭 ���� �� �ʱ�ȭ
    int arr_length = sizeof(arr) / sizeof(arr[0]); // �迭�� ���� ���

    int max = arr[0]; // ���� ū ���Ҹ� ������ ����. �ʱⰪ�� �迭�� ù ��° ��ҷ� ����

    // �迭�� ��Ҹ� ��ȸ�ϸ� ���� ū ���� ã��
    for (int i = 1; i < arr_length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // ���ο� �ִ밪 �߰� ��, max ������ ����
        }
    }

    // ���� ū ���� ���
    printf("���� ū ����: %d\n", max);

    return 0;
}
