#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const double PI = 3.14; // ������ 
    int radius = 0; // ���� ������ ������ ���� 
    int area = 0; // ���� ���� ������ ����
    int _ = 0; // ����(Discards)

    printf("������ �Է�: ");
    _ = scanf("%d", &radius);

    area = PI * radius * radius;

    printf("���� ����: %d\n", area);

    return 0;
}
