#include <stdio.h>

int main(void)
{
    // 왼쪽에서 오른쪽, 순서대로 처리
    int num1 = 3 + 5 - 2; // 6

    // 기본 처리 순서, 곱셈의 순위가 높다
    int num2 = 3 + 5 * 2; // 13

    // 괄호를 이용한 순서 변경
    int num3 = (3 + 5) * 2;	// 16

    // 곱셈과 나눗셈은 우선순위가 같으니 
    // 왼쪽에서 오른쪽, 순서대로 처리 
    int num4 = 3 + 5 * 2 / 10; // 4

    printf("%d\n", num1); // 6
    printf("%d\n", num2); // 13
    printf("%d\n", num3); // 16
    printf("%d\n", num4); // 4

    return 0;
}
