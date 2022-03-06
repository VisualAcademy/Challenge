#include <stdio.h>

int main(void)
{
    long long num1 = 9223372036854775807LL; // long long의 최댓값 
    int num2 = num1; // 컴파일러 경고 발생: '__int64'에서 'int'(으)로 변환하면서 데이터가 손실될 수 있습니다.
    printf("%d\n", num2); // -1: 손실된 값 출력

    long long num3 = 1234LL; // int 범위의 long long 데이터
    int num4 = num3; // 컴파일러 경고 발생: '__int64'에서 'int'(으)로 변환하면서 데이터가 손실될 수 있습니다.
    printf("%d\n", num4); // 1234: 변환된 값 출력

    long long num5 = 1234LL; // // int 범위의 long long 데이터
    int num6 = (int)num5; // 컴파일러 경고 없음
    printf("%d\n", num4); // 1234

    return 0;
}
