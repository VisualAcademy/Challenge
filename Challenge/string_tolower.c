#include <stdio.h>
#include <ctype.h> // tolower()
#include <string.h> // strlen()

int main(void)
{
    char buffer[80];

    printf("��� �ҹ��ڷ� ��ȯ��ų ���ڿ� �Է�: ");
    gets(buffer); // Hello, World!

    printf("����: %s\n", buffer); // Hello, World!
    buffer[80 - 1] = 0; // ������ ���ڸ� ���� ���ڷ� ó�� 

    for (int i = 0; i < (int)strlen(buffer); i++)
    {
        buffer[i] = tolower(buffer[i]); // �ҹ��ڷ� ���� ��ȯ �� �ٽ� ����
    }
    printf("��ȯ: %s\n", buffer); // hello, world!

    return 0;
}
