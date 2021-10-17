#include <stdio.h>

int main(void)
{
    //[A] 둘 다 참일때에만 참
    printf("%d\n", 1 && 1); // 1

    //[B] 하나라도 거짓이면 거짓
    printf("%d\n", 1 && 0); // 0

    return 0;
}
