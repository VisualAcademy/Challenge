//[?] while 문을 사용하여 1부터 100까지의 합을 구하는 프로그램
#include <stdio.h>

int main(void)
{
    int sum = 0;

    int i = 1;               // 초기식

    while (i <= 100)        // 조건식
    {
        sum += i;           // 실행문
        i++;                // 변화식 
    }

    printf("1부터 100까지의 합: %d\n", sum); // 5050
    printf("루프 종료 후 i: %d\n", i); // 101

    return 0;
}
