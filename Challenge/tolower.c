#include <stdio.h>

int main(void)
{
    char ch;

    printf("input: ");
    ch = getchar(); // 'A'

    // 대문자에 32를 더해서 소문자로 변경
    ch = ch + 32; // 'A' + 32 => 소문자 'a'

    printf("output: %c", ch);

    return 0;
}
