//[?] 1���� 100���� ������ �հ� ���ϱ�
#include <stdio.h>

int main(void)
{
    //[1] Input(�Է�)
    int sum = 0;

    //[2] Process(ó��)
    for (int i = 1; i <= 100; i++) // i�� 1���� 100���� 100�� �ݺ�
    {
        sum += i; // sum = sum + i; // ����(SUM)
    }

    //[3] Output(���)
    printf("1���� 100���� ������ ��: %d\n", sum); // 1���� 100���� ������ ��: 5050

    return 0;
}
