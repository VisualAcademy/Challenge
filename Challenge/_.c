#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
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
