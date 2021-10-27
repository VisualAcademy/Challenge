//[?] 1부터 100까지 정수의 합계 구하기
#include <stdio.h>

int main(void)
{
    //[1] Input(입력)
    int sum = 0;

    //[2] Process(처리)
    for (int i = 1; i <= 100; i++) // i가 1에서 100까지 100번 반복
    {
        sum += i; // sum = sum + i; // 누적(SUM)
    }

    //[3] Output(출력)
    printf("1부터 100까지 정수의 합: %d\n", sum); // 1부터 100까지 정수의 합: 5050

    return 0;
}
