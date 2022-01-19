// characters.c
#include <stdio.h>

int main(void)
{
    char msg[] = "Hello"; // 길이를 자동으로 설정
    printf("size: %llu\n", sizeof(msg)); // size: 6

    printf("%s\n", msg); // Hello
    printf("%c\n", msg[0]); // H

    msg[0] = 'C'; // 첫 글자를 C로 바꾸기
    printf("%s\n", msg); // Cello

    return 0;
}
