// �� ������: || -> �� OR: �ϳ��� ���̸� ��
#include <stdio.h>

int main(void)
{
    // || ������: OR
    printf("1 || 1 -> %d\n", 1 || 1); // 1
    printf("1 || 0 -> %d\n", 1 || 0); // 1
    printf("0 || 1 -> %d\n", 0 || 1); // 1
    printf("0 || 0 -> %d\n", 0 || 0); // 0

    return 0;
}
