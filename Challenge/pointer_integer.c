// pointer_integer.c 
#include <stdio.h>

int main(void)
{
	int a = 20, b = 35, c = 0; // ���� ���� ����
	int* pa, * pb, * pc; // ���� ���� ���� ����

	pa = &a; pb = &b; pc = &c; // ������ ������ ����

	*pc = *pa + *pb; // ����

	printf("%d + %d = %d\n", *pa, *pb, *pc); // 20 + 35 = 55

	return 0;
}
