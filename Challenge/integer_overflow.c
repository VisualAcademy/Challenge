// integer_overflow.c
#include <stdio.h>

// limits.h ��� ������ INT_MAX, INT_MIN���� ���� ������ �ִ�, �ּڰ� �� �� ����
// #include <limits.h>

int main(void)
{
    // int ������ ����: -2147483648 ~ +2147483647
    // ���� �� �ִ� ������ ���: �����÷�(��ħ) �߻�
    //int num = (2147483647 + 2147483647); // INT_MAX + INT_MAX
    //printf("%d\n", num); // �߸��� ������ �� ���

    return 0; 
}
