// 함수를 사용하여 큰 값과 작은 값 구하기 
#include <stdio.h>

// max 함수: 두 수 중에서 큰 수를 반환시켜주는 함수
int max(int x, int y)
{
    return (x > y) ? x : y; // 3항 연산자로 큰 수 구하기 
}

// min 함수: 두 수 중에서 작은 수를 반환시켜주는 함수
int min(int x, int y)
{
    // if else 문으로 작은 수 구하기 
    if (x < y)
    {
        return x; // 작은 값
    }
    else
    {
        return y;
    }
}

int main(void)
{
    printf("%d\n", max(3, 5)); // 5
    printf("%d\n", min(-3, -5)); // -5

    return 0;
}
