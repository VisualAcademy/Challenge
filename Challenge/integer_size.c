#include <stdio.h>
#include <limits.h> // ���� �ڷ����� �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
    // ���� �ڷ����� ũ��: sizeof�� �ڷ����� ũ�⸦ ���ϰ�  %llu�� ���
    // ������ ȯ���� GCC �����Ϸ������� ���� �����ڷ� %llu ��ſ� %lu�� ����ؾ� ��
    printf("%llu %llu %llu %llu\n",
        sizeof(short), // 2
        sizeof(int), // 4
        sizeof(long), // 4
        sizeof(long long) // 8
    );
    return 0;
}
