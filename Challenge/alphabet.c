#include <stdio.h>

int main(void)
{
    char c;
    printf("알파벳 한 자를 입력하세요.\n");
    c = getchar(); // 사용자로부터 문자 하나 입력

    // if 문으로 알파벳 문자인지 확인
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("%c는 알파벳 문자입니다.\n", c);
    }

    return 0;
}
