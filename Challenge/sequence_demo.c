// 순차문: 순서대로 실행하기 
#include <stdio.h>

int main(void)
{
    int kor = 100;
    int eng = 90;

    int tot = 0;
    double avg = 0.0;

    tot = kor + eng; // 총점 구하기
    avg = tot / 2.0; // 평균 구하기

    printf("총점: %d\n", tot); // 190
    printf("평균: %.2f\n", avg); // 95.00

    return 0;
}
