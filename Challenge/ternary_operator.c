// ternary_operator.c
//[?] ���� �����ڸ� ����Ͽ� ���� ũ�� ���ϱ�
#include <stdio.h>

int main(void)
{
    const char* result1 =
        ('A' < 'B') ? "'A'�� 'B'���� �۽��ϴ�." : "A B C ������ Ŀ���ϴ�.";
    const char* result2 =
        ('Z' < 'a')
        ?
        "'Z'�� 'a'���� �۽��ϴ�."
        :
        "�빮�ں��� �ҹ��ڰ� �� Ů�ϴ�.";

    printf("%s\n", result1); // 'A'�� 'B'���� �۽��ϴ�.
    printf("%s\n", result2); // 'Z'�� 'a'���� �۽��ϴ�.

    return 0;
}
