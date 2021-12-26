// N명의 학생의 점수를 입력받아 1차원 배열에 저장 후 총점 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 3

int main(void)
{
    int array[N]; // N개의 데이터를 갖는 1차원 배열 선언
    int tot = 0; // 총점 
    int _ = 0; // 버림(Discards) 

    //[1] 입력
    for (int i = 0; i < N; i++)
    {
        printf("%d번 점수: ", (i + 1)); _ = scanf("%d", &array[i]);
    }

    //[2] 처리 
    for (int i = 0; i < N; i++)
    {
        tot += array[i]; // 총점 구하기 
    }

    //[3] 출력 
    printf("%d명의 총점: %d\n", N, tot);

    return 0;
}
