#include <stdio.h>

int main(void)
{
    // ������ ���� ���� ����
    short volume = 30; // 2����Ʈ ������ ���� ���� �� �Ҵ�
    int youtube_count = 2147483647; // 4����Ʈ ������ ���� ���� �� �Ҵ�, �ִ� 
    long same_as_int = 2147483647; // 4����Ʈ ������ ���� ���� �� �Ҵ�, �ִ�
    long long new_youtube_count = 9223372036854775807; // 8����Ʈ ������ ���� ���� �� �Ҵ� 

    // ���� ������: short(%hi), int(%d), long(%ld), long long(%lld) 
    printf("short: %hi\n", volume); // short: 30
    printf("int: %d\n", youtube_count); // int: 2147483647
    printf("long: %ld\n", same_as_int); // long: 2147483647
    printf("long long: %lld\n", new_youtube_count); // long long: 9223372036854775807

    return 0;
}
