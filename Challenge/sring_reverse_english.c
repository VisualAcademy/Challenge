//[?] C ���� ���� �ܾ �Ųٷ� ��ȯ�ϴ� ���α׷� 
#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ����
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[80] = "";
    int r, i, j;
    char temp; 

    printf("�Է�: "); r = scanf("%s", source); 

    //[!] ó�� ���ڿ� ������ ���ڸ� ����ؼ� ��ȯ�ϰ� ����
    for (i = 0, j = strlen(source) - 1; i < j; i++, j--)
    {
        temp = source[i]; source[i] = source[j]; source[j] = temp; // ��ȯ 
    }

    printf("���: %s\n", source);

    return 0;
}
