// �Է¹��� �� ���� �հ�� ��� ���ϱ� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    long sum = 0; 
    double avg = 0.0; 

    int _ = scanf("%d %d", &num1, &num2);

    sum = num1 + num2; // �հ�
    avg = sum / 2.0; // ���

    printf("�հ�: %ld\n", sum);
    printf("���: %.1lf\n", avg); 

    return 0;
}
