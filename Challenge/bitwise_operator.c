// ��Ʈ ������: &, |, ~, ^
#include <stdio.h>

int main(void)
{
    int a = 10; // 1010
    int b = 6; // 0110

    printf("%d\n", a & b); // 2

    printf("%d\n", a | b); // 14

    printf("%d\n", a ^ b); // 12

    // 2�� �������� ���ؼ� 1010+1 �׸��� ��ȣ�� -�� -1011 => -11
    printf("%d\n", ~a); // -11

    return 0;
}
