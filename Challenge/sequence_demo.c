// ������: ������� �����ϱ� 
#include <stdio.h>

int main(void)
{
    int kor = 100;
    int eng = 90;

    int tot = 0;
    double avg = 0.0;

    tot = kor + eng; // ���� ���ϱ�
    avg = tot / 2.0; // ��� ���ϱ�

    printf("����: %d\n", tot); // 190
    printf("���: %.2f\n", avg); // 95.00

    return 0;
}
