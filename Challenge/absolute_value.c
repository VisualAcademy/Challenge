// absolute_value.c
//[?] 3�� ������(���� ������)�� ����Ͽ� ���� ���ϱ� 
#include <stdio.h>

int main(void)
{
    int num = -21; // ���� ���� ����
    int abs = (num < 0) ? -num : num; // 3�� �����ڷ� ������ ��ȣ ��ȯ
    printf("%d�� ����: %d\n", num, abs);

    return 0;
}
