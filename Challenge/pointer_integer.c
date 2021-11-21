// pointer_integer.c 
#include <stdio.h>

int main(void)
{
	int a = 20, b = 35, c = 0; // 정수 변수 선언
	int* pa, * pb, * pc; // 정수 참조 변수 선언

	pa = &a; pb = &b; pc = &c; // 각각의 변수를 참조

	*pc = *pa + *pb; // 연산

	printf("%d + %d = %d\n", *pa, *pb, *pc); // 20 + 35 = 55

	return 0;
}
