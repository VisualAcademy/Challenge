// enum_direction.c / 열거형.c
// 열거형을 사용한 문자열 상수화 
#include <stdio.h>

// 열거형 선언: 상하좌우
enum Direction
{
    Top,	    // 0
    Bottom,	    // 1
    Left = 10,  // 10 => 인덱스 값을 새로운 시작 값으로 초기화 
    Right	    // 11
};

int main(void)
{
    printf("%d\n", Top); // 0 
    printf("%d\n", Bottom); // 1
    printf("%d\n", Left); // 10
    printf("%d\n", Right); // 11

    return 0;
}
