#include <stdio.h>

int main(void)
{
    int min = -2147483647 - 1; // �������� ���� �� �ִ� ���� ������
    int max = +2147483647; // �������� ���� �� �ִ� ���� ū��

    printf("int ������ �ּڰ�: %d\n", min); // int ������ �ּڰ�: -2147483648
    printf("int ������ �ִ�: %d\n", max); // int ������ �ִ�: 2147483647

    return 0;
}
