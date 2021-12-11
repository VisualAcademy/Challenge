// char_array_string.c
#include <stdio.h>

int main(void)
{
    char str[80]; // 문자열 저장 공간 생성 

    str[0] = 'H'; // 문자 하나씩 할당 
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0'; // NULL 종결 문자

    printf("%s\n", str);

    return 0; 
}
