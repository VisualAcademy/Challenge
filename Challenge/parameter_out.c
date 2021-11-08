//[?] 포인터로 반환형 매개 변수 전달 방식 함수 만들기
// parameter_out.c
#include <stdio.h>

void do_something(int* num)
{
    *num = 1234; // [B] 역참조로 전달된 main 함수의 변수에 저장, 반드시 초기화해야 함
    printf("[1] %d\n", *num); // [1] 1234
}

int main(void)
{
    int num; // [A] 변수를 반드시 초기화할 필요 없음

    do_something(&num); // 반환형 매개 변수 전달 방식: 변수의 주소를 전달 

    printf("[2] %d\n", num); // [2] 1234

    return 0;
}
