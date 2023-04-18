#include <stdio.h>
#include <stdbool.h> // true, false 사용 

int main(void)
{
    int x = 7;
    int y = 3;

    bool result = false; // bool 타입 변수를 false로 초기화 

    result = x > y; // 1: true

    printf("%d\n", result); // 1

    return 0;
}
