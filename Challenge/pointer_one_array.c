// pointer_one_array.c
#include <stdio.h>

int main(void)
{
    int a[5] = { 10, 20, 30, 40, 50 };
    int* p;

    // 포인터로 배열 참조 
    p = a; // 배열명 자체가 배열의 시작 주소이므로 & 기호 생략 

    // 배열 직접 출력
    printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

    // 포인터 변수 증감으로 배열 참조 
    printf("%d %d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4));

    return 0;
}
