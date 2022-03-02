// 관계형 연산자(비교 연산자;Relational Operator, Comparative Operator)
// 관계형 연산자: < 작음, <= 작거나 같음, > 큼, >= 크거나 같음, == 같음, != 다름
#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = 5;

    printf("%d\n", x == y); // 0: x와 y가 같은지
    printf("%d\n", x != y); // 1: x와 y가 다른지
    printf("%d\n", x > y); // 0: x가 y보다 큰지
    printf("%d\n", x >= y); // 0: x가 y보다 크거나 같은지 
    printf("%d\n", x < y); // 1: x가 y보다 작은지 
    printf("%d\n", x <= y); // 1: x가 y보다 작거나 같은지 

    return 0;
}
