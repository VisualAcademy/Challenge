#include <stdio.h>

int main(void)
{
    //[A] �ϳ��� ���̸� ��
    printf("%d\n", 0 || 1); // 1
    //[B] �� �� �����϶����� ����
    printf("%d\n", 0 || 0); // 0

    return 0; 
}
