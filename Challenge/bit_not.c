// ~ ������: ��Ʈ NOT ������(1 <-> 0, ��Ʈ ����)
#include <stdio.h>

int main(void)
{
    int x = 0b00001010; // 10

    // x�� �������� ǥ��
    printf("~%d\n", x); // 10

    // NOT x�� �������� ǥ�� 
    printf("%3d\n", ~x); // -11

    return 0;
}
