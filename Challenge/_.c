#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char type;
    int size;
    double weight;

    scanf("%c %d %lf", &type, &size, &weight);

    printf("output: %c %d %lf\n", type, size, weight);

    return 0;
}
