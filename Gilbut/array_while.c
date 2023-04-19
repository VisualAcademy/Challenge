// 배열의 값을 while 문으로 반복해서 출력하기
#include <stdio.h>

int main(void)
{
    char see[] = "C language\n"; // 문자열을 저장할 배열 생성 및 초기화

    int index = 0; // 배열의 인덱스는 0부터 시작하기에 0으로 index 변수 초기화
    while (see[index] != '\0') // null 종결 문자를 만날 때까지 반복
    {
        putchar(see[index]); // 현재 인덱스의 문자를 출력
        index++; // 인덱스를 1 증가
    }

    return 0;
}
