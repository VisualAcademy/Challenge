#include <stdio.h>
#include <limits.h> // ��ȣ����  ���� �ڷ����� �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
    // 2����Ʈ ��ȣ ���� ������ ���� ���� �� �Ҵ�
    unsigned short volume = 30;
    // 4����Ʈ ��ȣ ���� ������ ���� ���� �� �Ҵ�, �ִ�
    unsigned int youtube_count = 4294967295;
    // 4����Ʈ ��ȣ ���� ������ ���� ���� �� �Ҵ�, �ִ�
    unsigned long same_as_int = 4294967295;
    // 8����Ʈ ��ȣ ���� ������ ���� ���� �� �Ҵ�
    unsigned long long new_youtube_count = 18446744073709551615;

    // ���� ������: unsigned short(%hu), unsigned int(%u), unsigned long(%lu), unsigned long long(%llu) 
    printf("%u %u %lu %llu\n", volume, youtube_count, same_as_int, new_youtube_count);

    // ��ȣ ���� ���� �ڷ����� ũ��: sizeof�� �ڷ����� ũ�⸦ ���ϰ� %llu�� ���
    // ������ ȯ���� GCC �����Ϸ������� ���� �����ڷ� %llu ��ſ� %lu�� ����ؾ� ��
    printf("%llu %llu %llu %llu\n",
        sizeof(unsigned short),
        sizeof(unsigned int),
        sizeof(unsigned long),
        sizeof(unsigned long long)
    );

    // ���� �ڷ����� ����
    printf("unsigned short: 0 ~ %hu\n", USHRT_MAX);
    printf("unsigned int: 0 ~ %u\n", UINT_MAX);
    printf("unsigned long: 0 ~ %lu\n", ULONG_MAX);
    printf("unsigned long long: 0 ~ %llu\n", ULLONG_MAX);

    return 0;
}
