#include <stdio.h>

int main(void)
{
    //[1] 단문: 3가지 스타일
    if (1 == 1) printf("단문 1\n");
    if (1 == 1)
        printf("단문 2\n");
    if (1 == 1)
    {
        printf("단문 3\n");
    }

    //[2] 복문: 반드시 중괄호 사용
    if (1 == 1)
    {
        printf("복문 A\n");
        printf("복문 B\n");
    }

    return 0;
}
