#include <stdio.h>

int main(void)
{
    // 데이터 형식 변수 선언
    short volume = 30; // 2바이트 정수형 변수 선언 및 할당
    int youtube_count = 2147483647; // 4바이트 정수형 변수 선언 및 할당, 최댓값 
    long same_as_int = 2147483647; // 4바이트 정수형 변수 선언 및 할당, 최댓값
    long long new_youtube_count = 9223372036854775807; // 8바이트 정수형 변수 선언 및 할당 

    // 서식 지정자: short(%hi), int(%d), long(%ld), long long(%lld) 
    printf("short: %hi\n", volume); // short: 30
    printf("int: %d\n", youtube_count); // int: 2147483647
    printf("long: %ld\n", same_as_int); // long: 2147483647
    printf("long long: %lld\n", new_youtube_count); // long long: 9223372036854775807

    return 0;
}
