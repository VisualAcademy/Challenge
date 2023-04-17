#include <stdio.h>
#include <limits.h> // 정수 자료형의 최댓값과 최솟값에 대한 상수 정의

int main(void)
{
    short s = SHRT_MAX;         // short의 최댓값: 32767
    int i = INT_MAX;            // int의 최댓값: 2147483647
    long l = LONG_MAX;          // long의 최댓값: 2147483647
    long long ll = LLONG_MAX;  // long long의 최댓값: 9223372036854775807

    // 서식 지정자: short(%hi), int(%d), long(%ld), long long(%lld) 
    // 32767 2147483647 2147483647 9223372036854775807
    printf("%hi %d %ld %lld\n", s, i, l, ll);

    return 0;
}
