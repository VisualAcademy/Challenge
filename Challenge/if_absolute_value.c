// if_absolute_value.c
// 예제: if 문으로 절댓값 구하기 
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int num; // 입력값 
    int abs; // 절댓값
    int _; // 버림(Discards) 

    //[1] 입력
    printf("정수 하나를 입력하세요: "); _ = scanf("%d", &num);

    //[2] 처리: 절댓값(Absolute Value) 구하기 
    if (num < 0)
    {
        abs = -num;
    }
    else
    {
        abs = num;
    }

    //[3] 출력 
    printf("%d의 절댓값: %d\n", num, abs);

    return 0;
}
