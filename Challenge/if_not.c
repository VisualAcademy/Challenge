// !(NOT) �����ڸ� if ���� ���ǽĿ��� ����ϱ�
#include <stdio.h>

int main(void)
{
	int bln = 0; // false(0) 

	if (!bln) // ~�� �ƴ϶�� ~�� �����ض�
	{
		printf("bln: false(0) -> ! -> true(1)\n");
	}

	return 0;
}
