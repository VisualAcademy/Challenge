// ��ȣ ���� ���� ������ ���� ����ϱ� 
#include <stdio.h>
#include <limits.h> //[1] ���� ������ ������ �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
    //[2] ���� ������ ���� ���� ����
    unsigned short volume = 30; // 2����Ʈ ������ ���� ���� �� �Ҵ�
    unsigned int youtube_count = 4294967295; // 4����Ʈ ������ ���� ���� �� �Ҵ�, �ִ�
    unsigned long same_as_int = 4294967295; // 4����Ʈ ������ ���� ���� �� �Ҵ�, �ִ�
    unsigned long long new_youtube_count = 18446744073709551615; // 8����Ʈ ������ ���� ���� �� �Ҵ�

    //[3] �ڸ� ǥ����: unsigned short(%u), unsigned int(%u), unsigned long(%lu), unsigned long long(%llu) 
    printf("%u %u %lu %llu\n", volume, youtube_count, same_as_int, new_youtube_count);

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
