// pointer_reference.c
// 포인터 변수는 값형 변수를 참조 
#include <stdio.h>

int main(void)
{
    int v = 10; // 값형 변수
    int* p = &v; // 참조형(포인터) 변수 
    printf("%d\n", *p); // 10
}
