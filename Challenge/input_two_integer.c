// input_two_integer.c 
//[?] ǥ�� �Է��� �ַܼκ��� �� ���� ������ �Է� �޾� ����ϴ� ���α׷� 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int one, two, _;

    printf("���� �� ���� �������� �����ؼ� �Է��ϼ���: ");
    _ = scanf("%d %d", &one, &two); // 2���� ������ �Է� �޾� ������ ������ ����

    printf("%d %d\n", one, two); // �Էµ� ���� ��� 

    return 0;
}
