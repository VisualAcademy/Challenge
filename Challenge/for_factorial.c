//[?] for ���� ����Ͽ� 1���� 4������ ���丮�� ���� ����ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
    int fact = 0;

    for (int i = 1; i <= 4; i++) // 1���� 4���� ���丮�� ���ϱ� 
    {
        printf("%d! -> ", i);
        fact = 1; // 1�� �ʱ�ȭ
        for (int j = 1; j <= i; j++) // 1���� i���� �ݺ��ؼ� ���ؼ� �����ϱ� 
        {
            fact = fact * j; // (((1 * 1) * 2) * 3) * 4
        }
        printf("%2d\n", fact);
    }

    return 0;
}
