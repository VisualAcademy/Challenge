// input_name.c
// 예제: 콘솔로부터 이름을 입력받아 출력하는 프로그램   
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char name[20]; // 문자의 배열 => 문자열을 담을 수 있는 그릇 
    int _; // 버림

    //[1] 입력
    printf("이름을 입력하세요: ");
    _ = scanf("%s", name); // 문자열은 %s 서식 지정자로 받기 

    //[2] 출력
    printf("안녕하세요. %s님.", name); // 배열은 이름만 지정하고 & 기호 생략

    return 0;
}
