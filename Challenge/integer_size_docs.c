// 정수 데이터 형식의 크기
#include <stdio.h>

int main(void)
{
    printf("short: %lld\n", sizeof(short)); // short: 2
    printf("int: %lld\n", sizeof(int)); // int: 4
    printf("long: %lld\n", sizeof(long)); // long: 4
    printf("unsigned: %lld\n", sizeof(unsigned)); // unsigned: 4
    return 0;
}
