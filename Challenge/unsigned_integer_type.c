#include <stdio.h>
#include <limits.h> // 부호없는  정수 자료형의 최댓값과 최솟값에 대한 상수 정의

int main(void)
{
    // 2바이트 부호 없는 정수형 변수 선언 및 할당
    unsigned short volume = 30;
    // 4바이트 부호 없는 정수형 변수 선언 및 할당, 최댓값
    unsigned int youtube_count = 4294967295;
    // 4바이트 부호 없는 정수형 변수 선언 및 할당, 최댓값
    unsigned long same_as_int = 4294967295;
    // 8바이트 부호 없는 정수형 변수 선언 및 할당
    unsigned long long new_youtube_count = 18446744073709551615;

    // 서식 지정자: unsigned short(%hu), unsigned int(%u), unsigned long(%lu), unsigned long long(%llu) 
    printf("%u %u %lu %llu\n", volume, youtube_count, same_as_int, new_youtube_count);

    // 부호 없는 정수 자료형의 크기: sizeof로 자료형의 크기를 구하고 %llu로 출력
    // 리눅스 환경의 GCC 컴파일러에서는 서식 지정자로 %llu 대신에 %lu로 출력해야 함
    printf("%llu %llu %llu %llu\n",
        sizeof(unsigned short),
        sizeof(unsigned int),
        sizeof(unsigned long),
        sizeof(unsigned long long)
    );

    // 정수 자료형의 범위
    printf("unsigned short: 0 ~ %hu\n", USHRT_MAX);
    printf("unsigned int: 0 ~ %u\n", UINT_MAX);
    printf("unsigned long: 0 ~ %lu\n", ULONG_MAX);
    printf("unsigned long long: 0 ~ %llu\n", ULLONG_MAX);

    return 0;
}
