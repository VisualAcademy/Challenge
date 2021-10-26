// atof() 함수를 사용하여 숫자 모양의 문자열을 실수로 변환
#include <stdio.h>
#include <stdlib.h> // atof()

int main(void)
{
    double pi = 0;

    pi = atof("3.14");

    printf("%g\n", pi); // 3.14
    printf("%g\n", atof("3.14abcd")); // 3.14
    printf("%g\n", atof("3.14E10")); // 3.14e+10

    return 0;
}
