//[?] 대입 연산자 축약형 사용하기
#include <stdio.h>

int main(void)
{
    int x = 3; // x를 3으로 초기화
    int y = 3; // y를 3으로 초기화

    x = x + 2;  // 기본형 방식으로 2 증가
    y += 2;     // 축약형 방식으로 2 증가

    printf("x: %d, y: %d\n", x, y); // x: 5, y: 5

    return 0;
}
