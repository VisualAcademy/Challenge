#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char c;

    // ���� �ϳ��� �Է� �� ����Ű�� �����ϴ�.
    int _ = scanf("%c", &c);

    // �빮�� A�� �Է��ߴٸ� %c�� ���� A, %d�� ���� 65�� ����մϴ�.
    printf("%c: %d\n", c, c);   // A: 65

    return 0;
}
