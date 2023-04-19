#include <stdio.h>

int main(void)
{
    int kor[3];
    int sum = 0; // 합계를 저장할 변수 sum을 선언하고 0으로 초기화
    float avg = 0; // 평균을 저장할 실수형 변수 avg를 선언하고 0으로 초기화

    // 배열에 수작업으로 직접 값을 대입
    kor[0] = 100;
    kor[1] = 90;
    kor[2] = 80;

    // 총점 계산
    for (int i = 0; i < 3; i++)
    {
        sum += kor[i];
    }

    // 평균 계산
    avg = sum / (float)3;

    // 총점과 평균 출력: 평균은 소수점 2자리까지 출력
    printf("총점: %d, 평균: %.2f\n", sum, avg);

    return 0;
}
