// ��Ʈ ������: &, |, ~, ^
#include <stdio.h>

int main(void)
{
    int x = 10; // 1010
    int y = 6; // 0110

    printf("%d\n", x & y); // 2

    printf("%d\n", x | y); // 14

    printf("%d\n", x ^ y); // 12

    // 2�� �������� ���ؼ� 1010+1 �׸��� ��ȣ�� -�� -1011 => -11
    printf("%d\n", ~x); // -11

    return 0;
}
