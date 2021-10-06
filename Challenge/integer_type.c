// ��ȣ �ִ� ���� ������ ���� ����ϱ� 
#include <stdio.h>
#include <limits.h> // ���� ������ ������ �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
    //[1] ���� ������ ���� ���� ����
    short s = 32767;
    int i = 2147483647;
    long l = 2147483647;
    long long ll = 9223372036854775807;

    //[2] �ڸ� ǥ����: short(%d), int(%d), long(%ld), long long(%lld) 
    //32767 2147483647 2147483647 9223372036854775807
    printf("%d %d %ld %lld\n", s, i, l, ll);

    //[3] ���� ������ ���� ũ��: sizeof�� ������ ���� ũ�⸦ �� �� �ְ� %llu�� ���
    // ������ ȯ���� GCC �����Ϸ������� ���� �����ڷ� %llu ��ſ� %lu�� ����ؾ� ��
    printf("%llu %llu %llu %llu\n",
        sizeof(short), // 2
        sizeof(int), // 4
        sizeof(long), // 4
        sizeof(long long) // 8
    );

    //[4] �Ǽ� ������ ������ ����: ū �����̹Ƿ� ���� ǥ������� ���
    //short: -32768 ~32767
    printf("short: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    //int : -2147483648 ~2147483647
    printf("int: %d ~ %d\n", INT_MIN, INT_MAX);
    //long : -2147483648 ~2147483647
    printf("long: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
    //long long : -9223372036854775808 ~9223372036854775807
    printf("long long: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);

    return 0;
}
