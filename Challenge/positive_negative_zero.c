//[?] ������ ���� ����, 0, ���� ������ �Ǵ��ϱ�(else if)
#include <stdio.h>

int main(void)
{
    int number = -1234;

    if (number > 0)
    {
        printf("%d�� ����Դϴ�.\n", number);
    }
    else if (number < 0)
    {
        printf("%d�� �����Դϴ�.\n", number);
    }
    else
    {
        printf("%d�� 0�Դϴ�.\n", number);
    }

    return 0;
}
