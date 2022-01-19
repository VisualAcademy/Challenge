// �Ǽ� ������ ���� ����ϱ� 
#include <stdio.h>
#include <float.h> // �Ǽ� ������ ������ �ִ񰪰� �ּڰ��� ���� ��� ����

int main(void)
{
	//[1] �Ǽ� ������ ���� ���� ����
	float f = 3.141592f; // �����е� �ε��Ҽ��� ����, ���� �ڿ� f ���̻� ����
	double d = 3.141592; // �����е� �ε��Ҽ��� ����, ���̻縦 ������ ����
	long double ld = 3.141592l; // �����е� �ε��Ҽ��� ���� ���̻� l�� ����

	//[2] ���� ������: float(%f), double(%f), long double(%Lf)
	printf("%.6f %.6f %.6Lf\n", f, d, ld); // 3.141592 3.141592 3.141592

	// ���� �����ڷ� ���� ǥ��� ���: float(%e), double(%e), long double(%Le)
	printf("%e %e %Le\n", f, d, ld); // 3.141592e+00 3.141592e+00 3.141592e+00

	//[3] �Ǽ� ������ ���� ũ��: sizeof�� ������ ���� ũ�⸦ �� �� �ְ� %llu�� ���
	// ������ ȯ���� GCC �����Ϸ������� ���� �����ڷ� %llu ��ſ� %lu�� ����ؾ� ��
	printf("%llu %llu %llu\n", sizeof(float), sizeof(double), sizeof(long double));

	//[4] �Ǽ� ������ ������ ����: ū �����̹Ƿ� ���� ǥ������� ���
	printf("float: %e ~ %e\n", FLT_MIN, FLT_MAX);
	printf("double: %e ~ %e\n", DBL_MIN, DBL_MAX);
	printf("long double: %Le ~ %Le\n", LDBL_MIN, LDBL_MAX);

	return 0;
}
