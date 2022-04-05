// 윤년법: 
// * 4년마다 2월달에 1일을 추가한다. 
// * 100년 단위에는 윤년이 아니다.
// * 400년 단위에는 윤년이다.
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int year; 
    scanf("%d", &year);

    // 유효성 검사: 1000~4000 사이의 숫자만 입력 
    if (year < 1000 || year > 4000)
    {
        printf("wrong");
    }
    else
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }

    return 0;
}
