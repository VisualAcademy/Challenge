#include <stdio.h>

int main(void)
{
    //[A] �� �� ���϶����� ��
    printf("%d\n", 1 && 1); // 1

    //[B] �ϳ��� �����̸� ����
    printf("%d\n", 1 && 0); // 0

    return 0;
}
