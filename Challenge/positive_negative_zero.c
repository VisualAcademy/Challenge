//[?] ������ ���� ����, 0, ���� ������ �Ǵ��ϱ�(else if)
#include <stdio.h>

int main(void)
{
    int number = -1234; //[1] ���� ���� �� �ʱ�ȭ 

    if (number > 0)
    {
        printf("%d�� ����Դϴ�.\n", number); //[A] ����� ��
    }
    else if (number < 0)
    {
        printf("%d�� �����Դϴ�.\n", number); //[B] ������ ��
    }
    else
    {
        printf("%d�� 0�Դϴ�.\n", number); //[C] 0�� ��
    }

    return 0;
}
