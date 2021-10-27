//[?] 1부터 n까지 정수 중 짝수의 합을 구하는 프로그램
#include <stdio.h>

int main(void)
{
    int n = 5;
    int sum = 0;

    for (int i = 1; i <= n; i++) // n == 5이므로 i가 0, 1, 2, 3, 4일 때
    {
        if (i % 2 == 0) // 모든 숫자를 2로 나누었을 때 0과 같으면 짝수 
        {
            sum += i; // 짝수만(2, 4) 더하기 
        }
    }

    printf("1부터 %d까지 짝수의 합: %d\n", n, sum); // 1부터 5까지 짝수의 합: 6

    return 0;
}
