// C 언어 코드 샘플 - 두 수의 크기 비교 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0; 
    int _ = 0; // 버림(Discards)

    printf("첫 번째 수: "); _ = scanf("%d", &num1);
    printf("두 번째 수: "); _ = scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d이(가) %d보다 큽니다.\n", num1, num2);
    }
    if (num1 < num2)
    {
        printf("%d이(가) %d보다 작습니다.\n", num1, num2);
    }
    if (num1 == num2)
    {
        printf("%d이(가) %d와 같습니다.\n", num1, num2);
    }

    return 0;
}
