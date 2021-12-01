// 입력 받은 두 수의 합계와 평균 구하기 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    long long int num1 = 0; // -21억~+21억 
    long long int num2 = 0; // -21억~+21억 
    long long int sum = 0; // +21억 + +21억 => long long int로 합계 저장 
    double avg = 0.0; // float 또는 double => 강의에서는 double 기준 사용

    int _ = scanf("%lld %lld", &num1, &num2); // %lld 서식 지정자 사용

    sum = num1 + num2; // 합계
    avg = sum / 2.0; // 평균

    printf("합계: %lld\n", sum);
    printf("평균: %.1lf\n", avg); // 소수점 첫 번째 자리까지 반올림해서 출력

    return 0;
}
