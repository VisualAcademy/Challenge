// ^ ������: ��Ʈ XOR ������(���� �ٸ��� 1)
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10����: 10
    int y = 0b1100; // 10����: 12

    // x�� �������� ǥ��
    printf("%d\n", x); // 10

    // y�� �������� ǥ��
    printf("%d\n", y); // 12

    printf("--\n");

    // x XOR y�� �������� ǥ�� 
    printf("%2d\n", x ^ y); // 6

    return 0;
}
