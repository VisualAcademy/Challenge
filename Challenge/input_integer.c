// input_integer.c 
//[?] ǥ�� �Է��� �ַܼκ��� ���� �ϳ��� �Է� �޾� ����ϴ� ���α׷� 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int num; // ���� Ÿ���� ���� �غ� 

    printf("���� �ϳ��� �Է��ϼ���: "); // �ȳ� �޽��� ��� 
    scanf("%d", &num); // ǥ�� �Է��� ���ؼ� �ϳ��� ������ �޾� num ������ ����

    printf("%d\n", num); // num ������ ���� ǥ�� ����� ���ؼ� ��� 

    return 0;
}
