// & ������: ��Ʈ AND ������(�� �� 1�϶��� 1)
#include <stdio.h>

int main(void)
{
    int x = 0b1010; // 10����: 10
    int y = 0b1100; // 10����: 12

    // x�� 10������ ǥ��
    printf("%d\n", x); // 10

    // y�� 10������ ǥ��
    printf("%d\n", y); // 12

    // x AND y�� 10������ ǥ�� 
    printf("%d\n", x & y); // 8 

    return 0;
}
