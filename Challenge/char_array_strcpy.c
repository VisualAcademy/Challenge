// char_array_strcpy.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h> // strcpy ����� ���� ��� ����

int main(void)
{
    char buffer[80];

    // strcpy() �Լ��� ���ڿ� ���ͷ��� ���� �迭�� ���� 
    strcpy(buffer, "C Language");

    printf("%s\n", buffer); // "C Language"

    return 0;
}
