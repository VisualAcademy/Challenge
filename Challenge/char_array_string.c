// char_array_string.c
#include <stdio.h>

int main(void)
{
    char str[80]; // ���ڿ� ���� ���� ���� 

    str[0] = 'H'; // ���� �ϳ��� �Ҵ� 
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0'; // NULL ���� ����

    printf("%s\n", str);

    return 0; 
}
