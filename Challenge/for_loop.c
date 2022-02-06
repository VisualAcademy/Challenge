//[?] for 문을 사용하여 "안녕하세요." 3번 출력하기
#include <stdio.h>

int main(void)
{
    int i = 0; // 반복 변수 선언

    //[!] for (초기식; 조건식; 증감식) { 실행문; }
    for (i = 0; i < 3; i++) // i가 0, 1, 2 순서로 3번 반복
    {
        printf("안녕하세요 %d\n", (i + 1));
    }

    return 0;
}
