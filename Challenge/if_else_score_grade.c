#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int score = 0; 
    printf("점수: ");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("금메달");
    }
    else
    {
        if (score >= 80)
        {
            printf("은메달");
        }
        else
        {
            if (score >= 70)
            {
                printf("동메달");
            }
            else
            {
                printf("노메달");
            }
        }
    }

    printf("을 수상하였습니다.\n");

    return 0;
}
