// input_unsigned_integer.c 
//[?] ǥ�� �Է��� �ַܼκ��� ���̸� ������ �Է� �޾� ����ϴ� ���α׷� 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    unsigned int age;
    int _; // ����(Discards) 

    printf("���̸� �Է��ϼ���: "); // ������Ʈ(Prompt, �ȳ� �޽���)
    _ = scanf("%u", &age); // %u ���� �����ڷ� ��ȣ���� ���� �Է� �ޱ� 

    printf("����: %d\n", age); // �Էµ� �� ��� 

    return 0;
}
