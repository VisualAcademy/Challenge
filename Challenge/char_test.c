// 대소문자 구분하기 
#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    char c;

    // 콘솔로부터 문자 하나 입력 받기
    printf("영문 대문자 또는 소문자 하나를 입력하세요.\n");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c는 대문자입니다.\n", c);
    }
    else
    {
        printf("%c는 소문자입니다.\n", c);
    }

    return 0;
}
