// ����: �ַܼκ��� �̸��� �Է¹޾� ����ϴ� ���α׷�   
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char name[20]; // ���ڿ�, 20�ڱ��� ���� 

    printf("�̸��� �Է��ϼ���: ");
    scanf("%s", name); // ���ڿ��� %s, �迭�� �̸��� �����ϰ� & ��ȣ ����

    printf("�ȳ��ϼ���. %s��\n ", name);

    return 0;
}
