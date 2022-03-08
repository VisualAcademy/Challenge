//[?] while 문: 조건식이 참일 동안 반복 실행
#include <stdio.h>

int main(void)
{
    int i = 0; // 초기식부터  
    while (i < 5) // 조건식을 만족하는 동안
    {
        printf("카운트: %d\n", i); // 실행문을 실행하고
        i++; // 변화식을 사용하여 인덱스 변수를 1씩 증가 
    }

    printf("루프 종료 후: %d\n", i);
    return 0;
}
