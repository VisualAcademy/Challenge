//[?] 1 ~ 100까지 3의 배수이고 그리고 4의 배수인 정수의 합
#include <stdio.h>

int main(void)
{
    int sum = 0;

    //[!] Process : 알고리즘(Algorithm): 주어진 범위 + 주어진 조건
    int i = 1;                                  // 초기식
    do
    {
        if (i % 3 == 0 && i % 4 == 0)           // 필터링(조건식)
        {
            sum += i;                           // 실행문(문장)
        }
        i++;                                    // 증감식
    } while (i <= 100);                         // 조건식(평가할 식)

    printf("%d\n", sum); // 432

    return 0;
}
