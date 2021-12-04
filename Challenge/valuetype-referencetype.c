// valuetype-referencetype.c
// 값형 변수와 참조형 변수의 차이 
#include <stdio.h>

void plus(int* p) // 매개 변수로 포인터를 받음 
{
    *p = *p + 10; // 역참조에 의해서 main 함수의 i 변수 값을 증가
    printf("*p = %d\n", *p);
}

int main(void)
{
    int i = 10; // main과 plus에서 데이터 저장 공간으로 사용
    int j = 20;

    int* p;
    p = &i;

    plus(p); // 넘겨준 포인터 변수의 값을 10 증가 

    printf("i : %d, j = %d\n", i, j);

    return 0; 
}
