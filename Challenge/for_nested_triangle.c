#include <stdio.h>

int main(void)
{
    // for 중첩 루프로 (5 * 5)번 반복하여 직삼각형 모양 출력
    for (int height = 0; height < 5; height++) // 높이(height) 반복
    {
        for (int width = 0; width < 5; width++) // 너비(width) 반복
        {
            // 별표 출력 조건 처리: height 값만큼 width를 반복하면 하나씩 증가됨
            if (width <= height)
            {
                printf("*"); // 별표 출력
            }
        }
        printf("\n"); // 줄 바꿈
    }

    return 0;
}
