// �Է� ���� �� ���� �հ�� ��� ���ϱ� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    long long int num1 = 0; // -21��~+21�� 
    long long int num2 = 0; // -21��~+21�� 
    long long int sum = 0; // +21�� + +21�� => long long int�� �հ� ���� 
    double avg = 0.0; // float �Ǵ� double => ���ǿ����� double ���� ���

    int _ = scanf("%lld %lld", &num1, &num2); // %lld ���� ������ ���

    sum = num1 + num2; // �հ�
    avg = sum / 2.0; // ���

    printf("�հ�: %lld\n", sum);
    printf("���: %.1lf\n", avg); // �Ҽ��� ù ��° �ڸ����� �ݿø��ؼ� ���

    return 0;
}
