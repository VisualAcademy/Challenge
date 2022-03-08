// do while 문을 사용하여 "안녕하세요." 3번 출력하기
#include <stdio.h>

int main(void)
{
    int count = 0;                  // 초기식

    do
    {
        printf("%d\n", count);     // 실행문
        count++;                    // 변화식
    } while (count < 3);            // 조건식

    printf("루프 종료 후: %d\n", count);
    return 0;
}
