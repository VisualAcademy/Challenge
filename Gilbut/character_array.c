#include <stdio.h>

int main(void)
{
    char characters[] = { 'a', 'b', 'c', 'd', '\0' }; // 문자 배열에 널 종결 문자 포함

    puts(characters); // 널 종결 문자를 포함한 문자 배열 출력

    return 0;
}
