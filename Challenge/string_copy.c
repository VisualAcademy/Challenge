//[?] 문자열 복사 함수 사용하기 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy(), strncpy(), strdup() 함수가 정의되어 있는 헤더 파일

int main(void)
{
    char buffer1[80] = "";
    char buffer2[80] = "";
    char* buffer3;

    strcpy(buffer1, "C Programming"); // 문자 배열에 문자열 복사
    strncpy(buffer2, buffer1, 9); // 문자 배열에 n개의 문자열 복사
    buffer3 = _strdup("C Language"); // 문자열 포인터에 문자열 복사 

    printf("%s\n", buffer1);
    printf("%s\n", buffer2);
    printf("%s\n", buffer3);

    return 0;
}
