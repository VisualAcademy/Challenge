// conditional_operator.c
//[?] 3�� ������(���� ������) ����ϱ� 
#include <stdio.h>

int main(void)
{
    int num = 3;

    // num ������ ¦���� result ������ "¦��" ��� �׷��� ������ "Ȧ��" ��� 
    const char* result = (num % 2 == 0) ? "¦��" : "Ȧ��";

    printf("%d��(��) %s�Դϴ�.\n", num, result);

    return 0;
}
