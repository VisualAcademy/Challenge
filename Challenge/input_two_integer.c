// input_two_integer.c 
//[?] 표준 입력인 콘솔로부터 두 개의 정수를 입력 받아 출력하는 프로그램 
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int one, two;

    printf("정수 두 개를 공백으로 구분해서 입력하세요: ");
    scanf("%d %d", &one, &two); // 정수 두 개를 입력 받아 각각의 변수에 저장

    printf("%d %d\n", one, two); // 입력된 내용 출력 

    return 0;
}
