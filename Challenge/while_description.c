// while 문으로 "안녕하세요." 여러 번 출력하기
#include <stdio.h>

int main(void)
{
    int count = 0;                  // 초기식

    while (count < 3)               // 조건식
    {
        printf("안녕하세요.\n");     // 실행문
        count++;                    // 증감식
    }

    return 0;
}
