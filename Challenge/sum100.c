//[?] 1���� 100���� ������ �հ� ���ϱ�
#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 100; i++) // i�� 1���� 100���� 100�� �ݺ�
        sum += i; // sum = sum + i; // ����(SUM) 

    printf("%d\n", sum); // 5050 

    return 0;
}
