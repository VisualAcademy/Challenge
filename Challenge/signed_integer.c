// ��ȣ(+, -) �ִ� ���� ������ ����: short, int, long, long long
#include <stdio.h>

int main(void)
{
    //[1] ��ȣ �ִ� ���� ������ ���� ���� ����
    short s = 32767; // 16��Ʈ ��ȣ �ִ� ������ ���� ���� �� �Ҵ�
    int i = 2147483647; // 32��Ʈ ��ȣ �ִ� ������ ���� ���� �� �Ҵ�
    long l = 2147483647; // 32��Ʈ ��ȣ �ִ� ������ ���� ���� �� �Ҵ�
    long long ll = 9223372036854775807; // 64��Ʈ ��ȣ �ִ� ������ ���� ���� �� �Ҵ�

    //[2] �ڸ� ǥ����: short(%d), int(%d), long(%ld), long long(%lld) 
    printf("short: %d\n", s);
    printf("int: %d\n", i);
    printf("long: %ld\n", l);
    printf("long long: %lld\n", ll);

    return 0;
}
