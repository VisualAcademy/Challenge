//[?] continue ���� ����Ͽ� �ݺ���(for, while, do)���� ���� �ݺ����� �̵��ϱ�
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            //[!] ���� �ݺ� ���� �� ���� �ݺ����� �̵�
            continue; // ¦�� �ǳʶٱ�
        }
        printf("%d\n", i);
    }
    return 0;
}
