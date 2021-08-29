//[?] 상수(Constant): 변하지 않는 변수, 읽기 전용 변수
#include <stdio.h>

int main(void)
{
    const int MAX = 100;        // 정수 형식의 상수 선언과 동시에 초기화 
    const double NUM = 0.1;     // 실수 형식의 상수 선언과 동시에 초기화 
    const char MY_GRADE = 'A';  // 문자 형식의 상수 선언과 동시에 초기화 

    printf("%d, %.2lf, %c\n", MAX, NUM, MY_GRADE); // 100, 0.10, A

    return 0;
}
