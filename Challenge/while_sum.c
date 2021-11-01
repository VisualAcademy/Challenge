//[?] while 문을 사용하여 1부터 100까지의 합을 구하는 프로그램
#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;

    i = 1;                  // 초기식
    while (i <= 100)        // 조건식
    {
        sum += i;           // 실행문
        i++;                // 증감식 
    }

    printf("1부터 100까지의 합: %d\n", sum); // 5050

    return 0;
}
