// get_number.c
#include <stdio.h>

int main(void)
{
    int number1 = 0;
    int number2 = 0;
    char buffer[80];

    printf("ù ��° ���� �Է�: "); gets(buffer); number1 = atoi(buffer);
    printf("�Է��� ���ڴ� %d�Դϴ�.\n", number1);

    printf("�� ��° ���� �Է�: "); gets(buffer); number2 = atoi(buffer);
    printf("�Է��� ���ڴ� %d�Դϴ�.\n", number2);

    return 0;
}
