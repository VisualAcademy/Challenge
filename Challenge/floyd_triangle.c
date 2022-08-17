#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int height = 0; // 높이 저장 
    int count = 1; // 카운트는 1부터 출력 

    printf("출력할 높이 수 입력: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) // 높이(height) 반복
    {
        for (int j = 0; j <= i; j++) // 너비(width) 반복
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}
