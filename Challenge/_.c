// char Ű����: ���� ������ Ÿ�� ������ ������ �� ��� 
#include <stdio.h>

int main(void)
{
    char grade = 'A'; // ���� �ϳ� ����
    char num = -128; // -128 ~ 127 ������ ���� ���� ����
    unsigned char data = 255; // 0 ~ 255 ������ ���� ���� ����

    printf("%d - %c\n", grade, grade); // 65 - A
    printf("%d\n", num); // -128
    printf("%d\n", data); // 255

    return 0;
}
