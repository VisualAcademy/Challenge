// �迭�� ũ�⸦ ���ϴ� ����
#include <stdio.h>

int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 }; // ���� �迭 ���� �� �ʱ�ȭ

    // �迭 ��ü�� ũ�⸦ ���ϱ� ���� sizeof ������ ���
    int arr_size_bytes = sizeof(arr);

    // �迭 ����� ũ�⸦ ���ϱ� ���� sizeof ������ ���
    int element_size_bytes = sizeof(arr[0]);

    // �迭�� ũ�⸦ ���ϱ� ���� �迭 ��ü ũ�⸦ ��� ũ��� ����
    int arr_length = arr_size_bytes / element_size_bytes;

    printf("�迭 ��ü ũ�� (����Ʈ): %d\n", arr_size_bytes);
    printf("�迭 ��� ũ�� (����Ʈ): %d\n", element_size_bytes);
    printf("�迭�� ���� (��� ����): %d\n", arr_length);

    return 0;
}
