//[?] while ���� ����Ͽ� 1���� 100������ ���� ���ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;

    i = 1;                  // �ʱ��
    while (i <= 100)        // ���ǽ�
    {
        sum += i;           // ���๮
        i++;                // ������ 
    }

    printf("1���� 100������ ��: %d\n", sum); // 5050

    return 0;
}
