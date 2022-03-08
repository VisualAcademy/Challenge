//[?] 1부터 100까지 정수의 합계 구하기
#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 100; i++) // i를 1에서 100까지 100번 반복
        sum += i; // sum = sum + i; // 누적(SUM) 

    printf("%d\n", sum); // 5050 

    return 0;
}
