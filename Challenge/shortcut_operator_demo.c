//[?] �Ҵ�(����) ������: =, +=, -=, *=, /=, %=
#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 5;

    b += a; // ����: b������ a������ ���� ����
    printf("%d\n", b); // 8

    // ���� ������ b�� 8

    b -= a; // ����: b���� a�� �� �� �ٽ� b�� �Ҵ�
    printf("%d\n", b); // 5

    return 0;
}
