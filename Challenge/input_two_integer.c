// input_two_integer.c 
//[?] ǥ�� �Է��� �ַܼκ��� �� ���� ������ �Է� �޾� ����ϴ� ���α׷� 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int one, two;

    printf("���� �� ���� �������� �����ؼ� �Է��ϼ���: ");
    scanf("%d %d", &one, &two); // ���� �� ���� �Է� �޾� ������ ������ ����

    printf("%d %d\n", one, two); // �Էµ� ���� ��� 

    return 0;
}
