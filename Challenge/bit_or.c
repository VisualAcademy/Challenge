// | ������: ��Ʈ OR ������(�ϳ��� 1�̸� 1)
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10����: 10
    int y = 0b1100; // 10����: 12

    // x�� ���������� �������� ���
    printf("%d\n", x); // 10

    // y�� ���������� �������� ���
    printf("%d\n", y); // 12

    printf("--\n");

    // x OR y�� �������� ǥ�� 
    printf("%d\n", x | y); // 14

    return 0;
}
