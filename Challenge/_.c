//[?] 한 줄의 문자열을 입력받고 출력하는 함수: gets(), puts() 
#include <stdio.h>

int main(void)
{
    char buffer[80] = { NULL }; // 문자열 저장할 공간 마련

    //[1] 표준 입력으로부터 한 줄 입력받기: gets()
    gets(buffer);

    //[2] 표준 출력으로 문자열 출력: puts()
    puts(buffer);

    return 0;
}
