#include <stdio.h>
#include <ctype.h> // toupper()
#include <string.h> // strlen()

int main(void)
{
    char buffer[80];

    printf("��� �빮�ڷ� ��ȯ��ų ���ڿ� �Է�: ");
    gets(buffer); // hello

    printf("����: %s\n", buffer); // hello
    buffer[80 - 1] = 0; // ������ ���ڸ� ���� ���ڷ� ó�� 

    for (int i = 0; i < (int)strlen(buffer); i++)
    {
        buffer[i] = toupper(buffer[i]); // �빮�ڷ� ���� ��ȯ �� �ٽ� ����
    }
    printf("��ȯ: %s\n", buffer); // HELLO

    return 0;
}
