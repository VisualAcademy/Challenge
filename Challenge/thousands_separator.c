// �ǽ�_õ�����޸����.c
// thousands_separator.c
/*
    �ǽ�: õ ���� �޸� ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    // ���� �����
    int len;
    int i;
    int _ = 0; // ����(Discards) 

    char buffer[50];
    char* digits;

    // ������ �Էº�
    printf("��ȯ��ų ���ڸ� �Է��ϼ���... => ");
    _ = scanf("%s", buffer);
    buffer[49] = 0;

    len = strlen(buffer);
    digits = buffer;

    printf("��ȯ ��� : ");

    for (i = len; i > 0;)
    {
        printf("%c", *digits++);
        i--;
        if (i > 0 && (i % 3) == 0)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
