#include <stdio.h>

int main(void)
{
    printf("%d\n", 1234);      // %d 정수 리터럴
    printf("%f  \n", 3.14f);      // %f 실수 리터럴(float)
    printf("%lf\n", 3.141592);  // %lf 실수 리터럴(double)
    printf("%Lf\n", 3.141592L);  // %Lf 실수 리터럴(long double)
    printf("%c\n", 'A');        // %c 문자 리터럴
    printf("%s\n", "HELLO");   // %s 문자열 리터럴
    return 0;
}
