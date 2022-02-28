#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int score1, score2, score3;
    int total;
    double average;

    scanf("%d %d %d", &score1, &score2, &score3);

    // 총점
    total = score1 + score2 + score3;

    // 평균 구하기 
    average = total / 3.0; // 평균 자동 형 변환 

    printf("세 과목의 평균: %.2lf\n", average);

    return 0;
}
