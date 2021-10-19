#include <stdio.h>

int main(void)
{
    int number1 = 10;
    int number2 = 20;

    if (number1 > number2) // 조건 처리 1
    {
        printf("number1이 더 큽니다.\n");
    }
    else if (number1 < number2) // 조건 처리 2
    {
        printf("number2가 더 큽니다.\n");
    }
    else
    {
        printf("둘 다 같습니다.\n");
    }

    return 0;
}
