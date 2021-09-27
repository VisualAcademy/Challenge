//[?] C 언어로 영어 단어를 거꾸로 변환하는 프로그램 
#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고 에러 방지
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[80] = "";
    int r, i, j;
    char temp; 

    printf("입력: "); r = scanf("%s", source); 

    //[!] 처음 문자와 마지막 문자를 계속해서 교환하고 증감
    for (i = 0, j = strlen(source) - 1; i < j; i++, j--)
    {
        temp = source[i]; source[i] = source[j]; source[j] = temp; // 교환 
    }

    printf("출력: %s\n", source);

    return 0;
}
