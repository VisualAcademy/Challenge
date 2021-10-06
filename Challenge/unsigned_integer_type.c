// 부호 없는 정수 데이터 형식 사용하기 
#include <stdio.h>
#include <limits.h> // 정수 데이터 형식의 최댓값과 최솟값에 대한 상수 정의

int main(void)
{
    //[1] 정수 데이터 형식 변수 선언
    unsigned short s = 65535; // 
    unsigned int i = 4294967295; // 
    unsigned long l = 4294967295; // 
    unsigned long long ll = 18446744073709551615; // 

    //[2] 자리 표시자: short(%u), int(%u), long(%lu), long long(%llu) 
    printf("%u %u %lu %llu\n", s, i, l, ll); // 

    //[3]정실수 데이터 형식 크기: sizeof로 데이터 형식 크기를 알 수 있고 %llu로 출력
    // 리눅스 환경의 GCC 컴파일러에서는 서식 지정자로 %llu 대신에 %lu로 출력해야 함
    printf("%llu %llu %llu %llu\n",
        sizeof(unsigned short),
        sizeof(unsigned int),
        sizeof(unsigned long),
        sizeof(unsigned long long)
    );

    //[4] 실수 데이터 형식의 범위: 큰 숫자이므로 지수 표기법으로 출력
    printf("unsigned short: 0 ~ %u\n", USHRT_MAX);
    printf("unsigned int: 0 ~ %u\n", UINT_MAX);
    printf("unsigned long: 0 ~ %lu\n", ULONG_MAX);
    printf("unsigned long long: 0 ~ %llu\n", ULLONG_MAX);

    return 0;
}
