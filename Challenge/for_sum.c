//[?] 1부터 3까지의 합계 구하기
#include <stdio.h>

int main(void)
{
    int n = 3; // n까지 반복
    int sum = 0; // 합계 저장

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; // 반복하면서 i 값을 계속 합해서 합계(SUM) 기능 구현
    }

    printf("1부터 %d까지의 합: %d\n", n, sum); // 1부터 3까지의 합: 6
}
