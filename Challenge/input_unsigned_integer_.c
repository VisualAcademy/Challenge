// input_unsigned_integer.c 
//[?] 표준 입력인 콘솔로부터 나이를 정수로 입력 받아 출력하는 프로그램 
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    unsigned int age;
    int _; // 버림(Discards) 

    printf("나이를 입력하세요: "); // 프롬프트(Prompt, 안내 메시지)
    _ = scanf("%u", &age); // %u 서식 지정자로 부호없는 정수 입력 받기 

    printf("나이: %d\n", age); // 입력된 값 출력 

    return 0;
}
