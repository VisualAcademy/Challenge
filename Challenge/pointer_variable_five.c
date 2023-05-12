// pointer_variable_five.c
/*
    값(Value)형 변수/배열
    포인터(참조;Reference)형 변수/배열
*/
#include <stdio.h>

int main(void)
{
    // Value Type 변수
    int a = 10;

    // Reference Type 변수: 포인터 변수
    int* pa;

    // 참조 추가
    pa = &a; // 포인터 변수에 주소 대입

    *pa = 20; // 역참조를 사용하여 포인터 변수가 참조하는 변수에 값 대입

    // 값형 변수 표현
    printf("[1] %d\n", a); // 20
    printf("[2] %p\n", &a); // 메모리 주소: 000000FFC78FFC24 번지: 계속 바뀌는 부분

    // 포인터형 변수 표현
    printf("[3] %p\n", pa); // 메모리 주소: 000000FFC78FFC24 번지
    printf("[4] %p\n", &pa); // 포인터 변수의 메모리 주소: 000000FFC78FFC48 번지
    printf("[5] %d\n", *pa); // 20

    return 0;
}
