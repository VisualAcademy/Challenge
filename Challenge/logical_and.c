///[?] 논리 연산자: && -> 논리 AND: 양쪽 다 모두 참일 때에만 참
#include <stdio.h>

int main(void)
{
    // && 연산자: AND
    printf("1 && 1 -> %d\n", 1 && 1); // 1
    printf("1 && 0 -> %d\n", 1 && 0); // 0
    printf("0 && 1 -> %d\n", 0 && 1); // 0
    printf("0 && 0 -> %d\n", 0 && 0); // 0

    return 0;
}
