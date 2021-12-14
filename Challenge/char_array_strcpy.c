// char_array_strcpy.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h> // strcpy 사용을 위한 헤더 파일

int main(void)
{
    char buffer[80];

    // strcpy() 함수로 문자열 리터럴을 문자 배열에 저장 
    strcpy(buffer, "C Language");

    printf("%s\n", buffer); // "C Language"

    return 0;
}
