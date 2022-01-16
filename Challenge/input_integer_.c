// input_integer_.c 
//[?] 표준 입력인 콘솔로부터 정수 하나를 입력 받아 출력하는 프로그램 
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int num; // 정수 타입의 변수 준비 
    int _; // 버림(Discards): scanf 함수의 결괏값을 담을 임시 변수

    printf("정수 하나를 입력하세요: "); // 프롬프트(prompt, 안내 메시지) 출력 
    _ = scanf("%d", &num); // 표준 입력을 통해서 하나의 정수를 받아 num 변수에 저장

    printf("%d\n", num); // num 변수의 값을 표준 출력을 통해서 출력 

    return 0;
}
