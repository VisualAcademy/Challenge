#include <stdio.h>

int main()
{
    int arr[3] = { 1, 3, 5 };

    int* ptr1 = arr; //[1] �迭 �̸��� �迭�� ���� �ּ�
    int* ptr2 = &arr[0]; //[2] 0��° �迭�� ���� �ּҴ� �迭�� �̸��� ����

    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]); // �迭 ���� ��� 
    printf("%d, %d, %d\n", *ptr1, *(ptr1 + 1), *(ptr1 + 2)); // �����ͷ� �迭 ���
    printf("%d, %d, %d\n", *(ptr2 + 0), *(ptr2 + 1), *(ptr2 + 2));

    return 0;
}
