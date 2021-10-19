// 두 수의 차이 구하기 
#include <stdio.h>

int main(void)
{
    int first = 3;
    int second = 5;
    int diff = 0; // 차이값이 양의 정수로 저장될 변수 

    if (first > second)
    {
        diff = first - second; // 더 큰 수에서 작은 수 빼기 
    }
    else
    {
        diff = second - first;
    }

    printf("%d와 %d의 차이: %d\n", first, second, diff); // 3와 5의 차이: 2

    return 0;
}
