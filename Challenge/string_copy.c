//[?] ���ڿ� ���� �Լ� ����ϱ� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strncpy(), strdup() �Լ��� ���ǵǾ� �ִ� ��� ����

int main(void)
{
    char buffer1[80] = "";
    char buffer2[80] = "";
    char* buffer3;

    strcpy(buffer1, "C Programming"); // ���� �迭�� ���ڿ� ����
    strncpy(buffer2, buffer1, 9); // ���� �迭�� n���� ���ڿ� ����
    buffer3 = _strdup("C Language"); // ���ڿ� �����Ϳ� ���ڿ� ���� 

    printf("%s\n", buffer1);
    printf("%s\n", buffer2);
    printf("%s\n", buffer3);

    return 0;
}
