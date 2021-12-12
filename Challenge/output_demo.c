#include <stdio.h>

int main(void)
{
    printf("%d\n", 1234); // 서식에 맞게 출력
    putchar('A'); // 문자 하나 출력
    putchar('\n'); // 이스케이프 시퀀스는 문자 하나로 취급
    puts("C Language"); // 문자열 출력

    return 0;
}
