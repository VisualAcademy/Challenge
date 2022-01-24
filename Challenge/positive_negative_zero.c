//[?] 정수를 양의 정수, 0, 음의 정수로 판단하기(else if)
#include <stdio.h>

int main(void)
{
    int number = -1234; //[1] 변수 선언 및 초기화 

    if (number > 0)
    {
        printf("%d는 양수입니다.\n", number); //[A] 양수일 때
    }
    else if (number < 0)
    {
        printf("%d는 음수입니다.\n", number); //[B] 음수일 때
    }
    else
    {
        printf("%d는 0입니다.\n", number); //[C] 0일 때
    }

    return 0;
}
