//[?] 할당(대입) 연산자: 변수에 특정 데이터 타입에 특정 값으로 초기화
#include <stdio.h>

int main(void)
{
    char* name = "C 언어"; // name 변수에 문자열을 대입합니다.
    char* version = "C2x"; // version 변수에 문자열을 대입합니다.

    printf("%s - %s\n", name, version);

    return 0;
}
