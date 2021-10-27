//[?] 숫자를 증가시키거나 감소시켜 출력하기
#include <stdio.h>

int main(void)
{
    //[1] i 변수의 값이 0, 1, 2, 3, 4로 증가
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", (i + 1)); // 탭(\t)으로 간격 띄우기 
    }
    printf("\n");

    //[2] i 변수의 값이 5, 4, 3, 2, 1로 감소
    for (int i = 5; i > 0; i--)
    {
        printf("%d\t", i); // 탭(\t)으로 간격 띄우기 
    }
    printf("\n");

    return 0;
}
