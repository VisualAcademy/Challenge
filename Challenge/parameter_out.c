//[?] �����ͷ� ��ȯ�� �Ű� ���� ���� ��� �Լ� �����
// parameter_out.c
#include <stdio.h>

void do_something(int* num)
{
    *num = 1234; // [B] �������� ���޵� main �Լ��� ������ ����, �ݵ�� �ʱ�ȭ�ؾ� ��
    printf("[1] %d\n", *num); // [1] 1234
}

int main(void)
{
    int num; // [A] ������ �ݵ�� �ʱ�ȭ�� �ʿ� ����

    do_something(&num); // ��ȯ�� �Ű� ���� ���� ���: ������ �ּҸ� ���� 

    printf("[2] %d\n", num); // [2] 1234

    return 0;
}
