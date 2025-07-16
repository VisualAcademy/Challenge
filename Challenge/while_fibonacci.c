//[?] 피보나치 수열: 1 1 2 3 5 8 13 21 ...
#include <stdio.h>

int main(void)
{
    // 초기 피보나치 수열의 첫 번째와 두 번째 숫자를 세팅합니다.
    int first = 0;   // 첫 번째 숫자를 0으로 설정합니다.
    int second = 1;  // 두 번째 숫자를 1로 설정합니다.

    // while문을 사용하여 second의 값이 20을 초과하지 않는 범위 내에서 피보나치 수열을 출력합니다.
    while (second <= 20)
    {
        // 현재 피보나치 숫자(즉, second)를 출력합니다.
        printf("%d\n", second);

        // temp에 first와 second의 합을 저장합니다.
        // 이 값은 다음 반복에서 'second' 숫자가 됩니다.
        int temp = first + second;

        // 'first'에 이전 'second' 값을 할당합니다.
        first = second;

        // 'second'에 이전 두 숫자의 합을 저장한 'temp' 값을 할당합니다.
        // 이는 다음 피보나치 숫자가 됩니다.
        second = temp;
    }

    return 0;
}
