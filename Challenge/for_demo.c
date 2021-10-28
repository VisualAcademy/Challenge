//[?] 반복문과 연산자 함께 사용하기
#include <stdio.h>

int main(void)
{
    //[1] 1부터 5까지 3개씩 출력하는 프로그램
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\t", i);
        if (i % 3 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    //[2] 1~100까지 정수의 합을 구하는 프로그램
    int sum = 0; // 합을 저장할 변수
    for (int i = 1; i <= 100; i++)
    {
        sum += i; // 누적
    }
    printf("1부터 100까지의 합: %d\n", sum);

    //[3] 1~100까지 정수 중 짝수의 합을 구하는 프로그램
    int even = 0;
    for (int i = 1; i <= 100; ++i)
    {
        if (i % 2 == 0)
        {
            even += i; // 짝수만...
        }
    }
    printf("1부터 100까지의 짝수의 합: %d\n", even);

    return 0;
}
