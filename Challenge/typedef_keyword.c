// typedef 키워드 사용하기 
#include <stdio.h>

// typedef 키워드로 double 키워드를 number 키워드로 사용하도록 설정 
typedef double number; // double을 number 이름으로도 사용

int main(void)
{
    number num1 = 1234.56; // double num1 = 1234.56; => 동일한 코드

    printf("%.2lf\n", num1); // 1234.56

    return 0;
}
