#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char c;

    // 문자 하나를 입력 후 엔터키를 누릅니다.
    int _ = scanf("%c", &c);

    // 대문자 A를 입력했다면 %c는 문자 A, %d는 정수 65를 출력합니다.
    printf("%c: %d\n", c, c);   // A: 65

    return 0;
}
