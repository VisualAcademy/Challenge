//[?] 1부터 100까지 짝수의 합을 구하는 프로그램
#include <stdio.h>

int main(void)
{
    //[1] Input(입력)
    int sum = 0;

    //[2] Process(처리) : 주어진 범위(for 문)에 주어진 조건(if 문)
    for (int i = 1; i <= 100; i++) // 1부터 100까지 범위 지정
    {
        if (i % 2 == 0) // 짝수만 필터링(조회)
        {
            sum += i; // 짝수일 때만 합 구하기 
        }
    }

    //[3] Output(출력)
    printf("1부터 100까지 짝수의 합: %d\n", sum);

    return 0;
}
