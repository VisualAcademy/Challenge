#include <stdio.h>

int main(void)
{
    int kor[3];
    int sum = 0; // �հ踦 ������ ���� sum�� �����ϰ� 0���� �ʱ�ȭ
    float avg = 0; // ����� ������ �Ǽ��� ���� avg�� �����ϰ� 0���� �ʱ�ȭ

    // �迭�� ���۾����� ���� ���� ����
    kor[0] = 100;
    kor[1] = 90;
    kor[2] = 80;

    // ���� ���
    for (int i = 0; i < 3; i++)
    {
        sum += kor[i];
    }

    // ��� ���
    avg = sum / (float)3;

    // ������ ��� ���: ����� �Ҽ��� 2�ڸ����� ���
    printf("����: %d, ���: %.2f\n", sum, avg);

    return 0;
}
