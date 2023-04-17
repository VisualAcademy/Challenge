#include <stdio.h>
#include <limits.h> // ���� �ڷ����� �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
    short s = SHRT_MAX;         // short�� �ִ�: 32767
    int i = INT_MAX;            // int�� �ִ�: 2147483647
    long l = LONG_MAX;          // long�� �ִ�: 2147483647
    long long ll = LLONG_MAX;  // long long�� �ִ�: 9223372036854775807

    // ���� ������: short(%hi), int(%d), long(%ld), long long(%lld) 
    // 32767 2147483647 2147483647 9223372036854775807
    printf("%hi %d %ld %lld\n", s, i, l, ll);

    return 0;
}
