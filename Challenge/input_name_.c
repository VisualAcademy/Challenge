// input_name.c
// ����: �ַܼκ��� �̸��� �Է¹޾� ����ϴ� ���α׷�   
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char name[20]; // ������ �迭 => ���ڿ��� ���� �� �ִ� �׸� 
    int _; // ����

    //[1] �Է�
    printf("�̸��� �Է��ϼ���: ");
    _ = scanf("%s", name); // ���ڿ��� %s ���� �����ڷ� �ޱ� 

    //[2] ���
    printf("�ȳ��ϼ���. %s��.", name); // �迭�� �̸��� �����ϰ� & ��ȣ ����

    return 0;
}
