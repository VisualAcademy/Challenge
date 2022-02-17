// input_character.c
// 예제: 콘솔로부터 영문자 하나를 입력받아 출력하는 프로그램   
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char c;

    // 문자 하나를 입력 후 엔터키를 누릅니다. 
    int _ = scanf("%c", &c);

    // 대문자 A를 입력했다면 %c는 문자 A, %d는 정수 65를 출력합니다. 
    printf("%c: %d", c, c); // %c로 문자 출력, %d로 아스키코드 출력 

    return 0;
}
