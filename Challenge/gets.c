//[?] 한 줄의 문자열을 입력받고 출력하는 함수: gets()
#include <stdio.h>

int main(void)
{
    char name[80] = { NULL }; // 이름 저장 공간 준비

    // 표준 입력으로부터 한 줄 입력받기: gets()
    gets(name);

    printf("%s\n", name);

    return 0;
}
