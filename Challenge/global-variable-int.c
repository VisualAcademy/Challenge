// global-variable-int.c
// 지역 변수(Local Variable): 함수 안에서 선언된 변수  
// 전역 변수(Global Variable): 함수 밖에서 선언된 변수 
#include <stdio.h>

int global_variable; // 전역 변수 선언(기본값으로 초기화)

int main(void)
{
    int local_variable = 1234; // 지역 변수 선언과 동시에 초기화

    printf("지역 변수: %d\n", local_variable); // 1234
    printf("전역 변수: %d\n", global_variable); // 0

    return 0; 
}
