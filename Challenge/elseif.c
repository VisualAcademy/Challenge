#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int menu = 0;
    int price = 0;

    printf("메뉴를 선택해주세요.\n");
    printf("1. 아메리카노 2. 라떼 3. 모카\n");

    scanf("%d", &menu);

    if (menu == 1)
    {
        price = 4100; // 아메리카노 선택
    }
    else if (menu == 2)
    {
        price = 4600; // 라떼 선택 
    }
    else if (menu == 3)
    {
        price = 5100; // 모카 선택 
    }
    else
    {
        price = 0; // 없는 메뉴
    }

    printf("가격: %d\n", price);

    return 0;
}
