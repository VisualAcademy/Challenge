//[?] 정수 하나를 입력 받아, 2부터 해당 수까지에 존재하는 모든 소수를 찾아서 출력
// 예: 2 ~ 20까지의 정수: 2, 3, 5, 7, 11, 13, 17, 19 -> 8개 
#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    //[1] Input
    int sum = 0; // 소수 합계
    int count = 0; // 소수 개수 
    int sw = 1; // 소수(1)인지를 확인하는 스위치 변수(flag) 
    int number = 0; // 2 ~ number까지의 수 중 소수를 구함 
    scanf("%d", &number);

    //[2] Process: Prime Number -> Count
    for (int i = 2; i <= number; i++) // 2부터 n까지 반복하면서 소수 판별
    {
        sw = 1; // 일단 모든 반복마다 소수로 놓고 시작

        // 2부터 현재수(i) - 1까지 나누었을 때 나누어 떨어지면 소수가 아님
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                sw = 0;
                break;
            }
        }

        if (sw)
        {
            printf("%d\t", i);
            count++; // COUNT
            sum = sum + i; // SUM 

            if (count % 5 == 0)
            {
                printf("\n"); // 줄바꿈
            }
        }
    }

    printf("\n");

    //[3] Output
    printf("2부터 %d까지의 소수의 개수: %d\n", number, count);
    printf("2부터 %d까지의 소수의 합계: %d\n", number, sum);

    return 0;
}
