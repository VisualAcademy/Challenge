#include <stdio.h>

//[?] ������ ���ϴ� �Լ� �����
int get_abs(int num)
{
    return (num < 0) ? -num : num;
}

int main(void)
{
    int num = -21;
    int abs = get_abs(num);
    printf("%d�� ����: %d\n", num, abs);

    return 0;
}
