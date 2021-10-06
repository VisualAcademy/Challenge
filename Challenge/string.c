#include <stdio.h>

int main(void)
{
    //[1] 문자열 변수 선언과 동시에 초기화 
    char message[] = "C Language";

    //[2] 문자열 출력: %s 서식 지정자 사용
    printf("%s\n", message); // C Language

    //[3] 문자열 길이: sizeof() 연산자 사용
    printf("문자열 길이: %llu\n", sizeof(message)); // 10 + 1

    //[4] 문자열 중에서 문자 하나만 [n - 1] 형태로 출력: 위치는 0번째 숫자부터 시작
    printf("%c\n", message[0]); // C

    //[5] 문자열 중에서 특정 위치에 있는 문자 변경
    message[0] = 'Z'; // 첫 글자를 'Z'로 바꾸기

    //[6] 다시 전체 문자열 출력
    printf("%s\n", message); // Z Language

    return 0;
}
