// ��ȣ �ִ� ���� ������ ���� ����ϱ� 
#include <stdio.h>
#include <limits.h> // ���� ������ ������ �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
	//[1] ���� ������ ���� ���� ����
	short s = 32767; // 
	int i = 2147483647; // 
	long l = 2147483647; // 
	long long ll = 9223372036854775807; // 

	//[2] �ڸ� ǥ����: short(%d), int(%d), long(%ld), long long(%lld) 
	printf("%d %d %ld %lld\n", s, i, l, ll); // 

	//[3]���Ǽ� ������ ���� ũ��: sizeof�� ������ ���� ũ�⸦ �� �� �ְ� %llu�� ���
	// ������ ȯ���� GCC �����Ϸ������� ���� �����ڷ� %llu ��ſ� %lu�� ����ؾ� ��
	printf("%llu %llu %llu %llu\n", 
		sizeof(short), //
		sizeof(int), //
		sizeof(long), //
		sizeof(long long) //
	);

	//[4] �Ǽ� ������ ������ ����: ū �����̹Ƿ� ���� ǥ������� ���
	printf("short: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("int: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("long: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("long long: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);

	return 0;
}
