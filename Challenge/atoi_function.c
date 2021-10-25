// atoi() 함수를 사용하여 숫자 모양의 문자열을 정수로 변환
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int result = 0; 
    int first = 0;
    int second = 0; 

    first = atoi("1234abc"); // 1234 
    second = atoi("1234\t"); // 1234
    result = first + second; // 2468

    printf("%d\n", result); // 2468

    return 0;
}
