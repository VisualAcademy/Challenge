#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%c를 대문자로 변환: %c\n", 'a', toupper('a')); // 대문자로 변환
    printf("%c를 소문자로 변환: %c\n", 'T', tolower('T')); // 소문자로 변환

    return 0;
}
