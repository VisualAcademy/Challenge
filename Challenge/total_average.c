#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int score1, score2, score3;
    int total;
    double average;

    scanf("%d %d %d", &score1, &score2, &score3);

    // ����
    total = score1 + score2 + score3;

    // ��� ���ϱ� 
    average = total / 3.0; // ��� �ڵ� �� ��ȯ 

    printf("�� ������ ���: %.2lf\n", average);

    return 0;
}
