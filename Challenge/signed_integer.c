// 부호(+, -) 있는 정수 데이터 형식: short, int, long, long long
#include <stdio.h>

int main(void)
{
    //[1] 부호 있는 정수 데이터 형식 변수 선언
    short s = 32767; // 16비트 부호 있는 정수형 변수 선언 및 할당
    int i = 2147483647; // 32비트 부호 있는 정수형 변수 선언 및 할당
    long l = 2147483647; // 32비트 부호 있는 정수형 변수 선언 및 할당
    long long ll = 9223372036854775807; // 64비트 부호 있는 정수형 변수 선언 및 할당

    //[2] 자리 표시자: short(%d), int(%d), long(%ld), long long(%lld) 
    printf("short: %d\n", s); // short: 32767
    printf("int: %d\n", i); // int: 2147483647
    printf("long: %ld\n", l); // long: 2147483647
    printf("long long: %lld\n", ll); // long long: 9223372036854775807

    return 0;
}
