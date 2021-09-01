//[?] 문자열을 숫자로 변환하기 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* str = "3.141592육오";

    int i = atoi(str);      // 문자열을 int 형식으로 변환
    long l = atol(str);     // 문자열을 long 형식으로 변환
    float f = atof(str);    // 문자열을 float, double 형식으로 변환

    printf("%d\n", i); // 3
    printf("%ld\n", l); // 3
    printf("%.7lf\n", f); // 3.1415920

    return 0;
}
