#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 5;

    b += a; // ����: b������ a������ ���� ����, b = b + a;�� ����
    printf("%d\n", b); // 8

    // ���� ������ b�� 8

    b -= a; // ����: b���� a�� �� �� �ٽ� b�� �Ҵ�, b = b - a;�� ����
    printf("%d\n", b); // 5

    return 0;
}