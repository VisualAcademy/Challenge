#include <stdio.h>

int main(void)
{
    int number = 0;

    while (1) // 무한 루프: 1(참)일 동안 계속 실행
    {
        number = number + 1; // number 값 1 증가

        printf("%d\n", number); // 정수 출력 

        if (number >= 5) // 중단 조건
        {
            break; // break 문으로 number가 5 이상이면 무한 루프 빠져 나오기 
        }
    }

    return 0;
}
