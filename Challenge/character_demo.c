// char Ű����: ���� ������ ���� ������ ����
#include <stdio.h>

int main(void)
{
    char grade = 'A'; // ���� �ϳ� ����
    char num = -128; // -128~127
    unsigned char age = 255; // 0~255

    printf("%c\n", grade); // A
    printf("%d\n", num); // -128
    printf("%d\n", age); // 255

    return 0;
}
