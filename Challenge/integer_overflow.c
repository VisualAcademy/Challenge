// integer_overflow.c
#include <stdio.h>

// limits.h 헤더 파일의 INT_MAX, INT_MIN으로 정수 형식의 최댓값, 최솟값 알 수 있음
// #include <limits.h>

int main(void)
{
    // int 형식의 범위: -2147483648 ~ +2147483647
    // 담을 수 있는 범위를 벗어남: 오버플로(넘침) 발생
    //int num = (2147483647 + 2147483647); // INT_MAX + INT_MAX
    //printf("%d\n", num); // 잘못된 데이터 값 출력

    return 0; 
}
