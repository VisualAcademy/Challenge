// goto로 중첩 루프 한 번에 빠져나오기 
#include <stdio.h>

int main(void)
{
    int goal = 0; 

    // 20번 반복: 4 * 5
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (goal == 10) // 원하는 목표 또는 예외를 만났을 때
            {
                goto exit; // 중첩 루프를 빠져나와 exit 레이블로 바로 이동
            }
            goal++;
        }
    }

exit: 
    // 마무리 또는 예외 처리 영역
    printf("%d\n", goal); // 10

    return 0;
}
