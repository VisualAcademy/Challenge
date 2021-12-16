#include <stdio.h>
#include <ctype.h> // toupper()
#include <string.h> // strlen()

int main(void)
{
    char buffer[80];

    printf("모두 대문자로 변환시킬 문자열 입력: ");
    gets(buffer); // hello

    printf("원본: %s\n", buffer); // hello
    buffer[80 - 1] = 0; // 마지막 문자를 종결 문자로 처리 

    for (int i = 0; i < (int)strlen(buffer); i++)
    {
        buffer[i] = toupper(buffer[i]); // 대문자로 문자 변환 후 다시 대입
    }
    printf("변환: %s\n", buffer); // HELLO

    return 0;
}
