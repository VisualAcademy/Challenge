// char 키워드: 문자 데이터 형식 변수를 선언
#include <stdio.h>

int main(void)
{
    char grade = 'A'; // 문자 하나 저장
    char num = -128; // -128~127
    unsigned char age = 255; // 0~255

    printf("%c\n", grade); // A
    printf("%d\n", num); // -128
    printf("%d\n", age); // 255

    return 0;
}
