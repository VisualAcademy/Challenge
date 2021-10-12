// 나머지를 구해주는 나머지 함수 사용하기 
#include <stdio.h>
#include <stdlib.h> // div(), ldiv()
#include <math.h> // fmod()

int main(void)
{
    div_t r; // div_t: div() 함수의 반환값 형식
    ldiv_t m; // ldiv_t: ldiv() 함수의 반환값 형식
    double d;  // double: fmod() 함수의 반환값 형식 
    //[1] 정수(int) 나누기
    r = div(5, 3);
    printf("몫: %d, 나머지: %d\n", r.quot, r.rem); // 1, 2

    //[2] 정수(long) 나누기
    m = ldiv(3, 5);
    printf("몫: %ld, 나머지: %ld\n", m.quot, m.rem); // 0, 3

    //[3] 실수 나누기
    d = fmod(3.14, 3.12); // 0.02
    printf("나머지: %.2f\n", d);

    return 0;
}
