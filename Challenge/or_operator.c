#include <stdio.h>

int main(void)
{
    //[A] 하나라도 참이면 참
    printf("%d\n", 0 || 1); // 1
    //[B] 둘 다 거짓일때에만 거짓
    printf("%d\n", 0 || 0); // 0

    return 0; 
}
