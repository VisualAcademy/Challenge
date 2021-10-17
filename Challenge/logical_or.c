// 논리 연산자: || -> 논리 OR: 하나라도 참이면 참
#include <stdio.h>

int main(void)
{
    // || 연산자: OR
    printf("1 || 1 -> %d\n", 1 || 1); // 1
    printf("1 || 0 -> %d\n", 1 || 0); // 1
    printf("0 || 1 -> %d\n", 0 || 1); // 1
    printf("0 || 0 -> %d\n", 0 || 0); // 0

    return 0;
}
