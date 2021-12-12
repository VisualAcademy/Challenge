// char_array_string.c
#include <stdio.h>

int main(void)
{
    char hello[80]; // 문자열 저장 공간 생성
    char world[40] = "World"; // 문자 배열 선언과 동시에 초기화 

    hello[0] = 'H'; // 문자 하나씩 할당
    hello[1] = 'e';
    hello[2] = 'l';
    hello[3] = 'l';
    hello[4] = 'o';
    hello[5] = '\0'; // NULL 종결 문자: 문자열의 끝 

    printf("%s, %s!\n", hello, world);

    return 0;
}
