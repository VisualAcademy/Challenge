#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer1[80] = "C "; 
    char buffer2[80] = "C "; 

    strcat(buffer1, "Programming"); // ���ڿ� ����
    printf("%s\n", buffer1); // C Programming

    strncat(buffer2, "Programming", 7); // ���ڿ� n�� ���� 
    printf("%s\n", buffer2); // C Program

    return 0;
}
