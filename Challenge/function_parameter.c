//[?] 매개 변수(Parameter)가 있는 함수 만들고 호출하기 
#include <stdio.h>

// 매개 변수가 있는 함수
void show_message(char* message)
{
    puts(message); // 넘어온 매개 변수의 값을 출력
}

int main(void)
{
    show_message("매개 변수"); // show_message 함수에 "매개 변수" 문자열 전달
    show_message("Parameter"); // show_message 함수에 "Parameter" 문자열 전달

    return 0;
}
