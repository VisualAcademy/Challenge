// input_character.c
// ����: �ַܼκ��� ������ �ϳ��� �Է¹޾� ����ϴ� ���α׷�   
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char c;

    //[1] �ַܼκ��� ���� �ϳ��� �Է� �� ����Ű�� �����ϴ�. 
    int _ = scanf("%c", &c);

    //[2] �빮�� 'A'�� �ԷµǸ� 'A'�� �ش��ϴ� ���� ���� 65�� ��µ˴ϴ�.
    printf("%c(%d)", c, c); // %c�� ���� ���, %d�� �ƽ�Ű�ڵ� ��� 

    return 0;
}
