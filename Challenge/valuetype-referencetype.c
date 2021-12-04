// valuetype-referencetype.c
// 값형 변수와 참조형 변수의 차이 
#include <stdio.h>

void plus(int* p) // 매개 변수로 포인터를 받음 
{
    *p = *p + 10; // 역참조에 의해서 main 함수의 i 변수 값을 증가
    printf("plus function: *p: %d\n", *p);
}

int main(void)
{
    int i = 10; // main과 plus에서 데이터 저장 공간으로 사용
    int j = 20; // 값형 변수 선언과 동시에 초기화

    int* p; // 포인터 변수 선언 
    p = &i; // 참조형 변수에 값형 변수 참조 

    plus(p); // 넘겨준 포인터 변수의 값을 10 증가 

    printf("main function: i: %d, j: %d, *p: %d\n", i, j, *p);

    return 0; 
}
