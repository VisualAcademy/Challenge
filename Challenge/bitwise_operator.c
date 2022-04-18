#include <stdio.h>

int main(void)
{
    int a = 10; // 1010
    int b = 6; // 0110

    printf("%d\n", a & b); // 0010, 2

    printf("%d\n", a | b); // 1110, 14

    printf("%d\n", a ^ b); // 1100, 12

    return 0;
}
