// 수학 관련된 함수: 절댓값 함수를 사용하여 절댓값 구하기 
#include <stdio.h>
#include <stdlib.h> // abs(), labs()
#include <math.h> // fabs() 

int main(void)
{
    //[1] abs() 함수: 정수(int) 데이터 형식의 절댓값
    printf("%d -> %d\n", -100, abs(-100)); // -100 -> 100

    //[2] labs() 함수: 정수(long) 데이터 형식의 절댓값
    printf("%ld -> %ld\n", -1234, labs(-1234)); // -1234 -> 1234

    //[3] fabs() 함수: 실수(double) 데이터 형식의 절댓값
    printf("%.2f -> %.2f\n", -3.14, fabs(-3.14)); // -3.14 -> 3.14

    return 0;
}
