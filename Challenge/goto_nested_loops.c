// goto�� ��ø ���� �� ���� ���������� 
#include <stdio.h>

int main(void)
{
    int goal = 0; 

    // 20�� �ݺ�: 4 * 5
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (goal == 10) // ���ϴ� ��ǥ �Ǵ� ���ܸ� ������ ��
            {
                goto exit; // ��ø ������ �������� exit ���̺�� �ٷ� �̵�
            }
            goal++;
        }
    }

exit: 
    // ������ �Ǵ� ���� ó�� ����
    printf("%d\n", goal); // 10

    return 0;
}
