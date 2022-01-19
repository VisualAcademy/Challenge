// 실수 데이터 형식 사용하기 
#include <stdio.h>
#include <float.h> // 실수 데이터 형식의 최댓값과 최솟값에 대한 상수 정의

int main(void)
{
	//[1] 실수 데이터 형식 변수 선언
	float f = 3.141592f; // 단정밀도 부동소수점 변수, 숫자 뒤에 f 접미사 붙임
	double d = 3.141592; // 배정밀도 부동소수점 변수, 접미사를 붙이지 않음
	long double ld = 3.141592l; // 배정밀도 부동소수점 변수 접미사 l을 붙임

	//[2] 서식 지정자: float(%f), double(%f), long double(%Lf)
	printf("%.6f %.6f %.6Lf\n", f, d, ld); // 3.141592 3.141592 3.141592

	// 서식 지정자로 지수 표기법 사용: float(%e), double(%e), long double(%Le)
	printf("%e %e %Le\n", f, d, ld); // 3.141592e+00 3.141592e+00 3.141592e+00

	//[3] 실수 데이터 형식 크기: sizeof로 데이터 형식 크기를 알 수 있고 %llu로 출력
	// 리눅스 환경의 GCC 컴파일러에서는 서식 지정자로 %llu 대신에 %lu로 출력해야 함
	printf("%llu %llu %llu\n", sizeof(float), sizeof(double), sizeof(long double));

	//[4] 실수 데이터 형식의 범위: 큰 숫자이므로 지수 표기법으로 출력
	printf("float: %e ~ %e\n", FLT_MIN, FLT_MAX);
	printf("double: %e ~ %e\n", DBL_MIN, DBL_MAX);
	printf("long double: %Le ~ %Le\n", LDBL_MIN, LDBL_MAX);

	return 0;
}
