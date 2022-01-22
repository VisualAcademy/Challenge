// 재귀 함수(Recursion)
#include <stdio.h>

// 3항 연산자를 사용한 factorial 구하기
int fact(int n)
{
    return (n > 1) ? n * fact(n - 1) : 1;
}

// 재귀 함수를 사용한 factorial 함수 만들기: 단, 재귀함수는 tree 데이터 구조 탐색에 유리
int factorial(int n)
{
    // 종료
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // 재귀 호출
    return n * factorial(n - 1);
}

// 단순한 factorial은 이 방법이 좋음
int factorial_for(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i; // ((((1 * 1) * 2) * 3) * 4)
    }
    return result;
}

int main(void)
{
    // 재귀 호출을 사용하여 factorial을 구하기: 4! = 4 * 3 * 2 * 1 = 24
    printf("%d\n", 4 * 3 * 2 * 1); // 24
    printf("%d\n", factorial_for(4)); // 24
    printf("%d\n", factorial(4)); // 24
    printf("%d\n", fact(4)); // 24

    return 0;
}
