// ��ȣ ���� ���� ������ ���� ����ϱ� 
#include <stdio.h>
#include <limits.h> //[1] ���� ������ ������ �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
    //[2] ���� ������ ���� ���� ����
    unsigned short s = 65535;
    unsigned int i = 4294967295;
    unsigned long l = 4294967295;
    unsigned long long ll = 18446744073709551615;

    //[3] �ڸ� ǥ����: short(%u), int(%u), long(%lu), long long(%llu) 
    printf("%u %u %lu %llu\n", s, i, l, ll); // 

    //[4] ���� ������ ���� ũ��: sizeof�� ������ ���� ũ�⸦ �� �� �ְ� %llu�� ���
    // ������ ȯ���� GCC �����Ϸ������� ���� �����ڷ� %llu ��ſ� %lu�� ����ؾ� ��
    printf("%llu %llu %llu %llu\n",
        sizeof(unsigned short),
        sizeof(unsigned int),
        sizeof(unsigned long),
        sizeof(unsigned long long)
    );

    //[5] ���� ������ ������ ����
    printf("unsigned short: 0 ~ %u\n", USHRT_MAX);
    printf("unsigned int: 0 ~ %u\n", UINT_MAX);
    printf("unsigned long: 0 ~ %lu\n", ULONG_MAX);
    printf("unsigned long long: 0 ~ %llu\n", ULLONG_MAX);

    return 0;
}
