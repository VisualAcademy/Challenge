// N���� �л��� ������ �Է¹޾� 1���� �迭�� ���� �� ���� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 3

int main(void)
{
    int array[N]; // N���� �����͸� ���� 1���� �迭 ����
    int tot = 0; // ���� 
    int _ = 0; // ����(Discards) 

    //[1] �Է�
    for (int i = 0; i < N; i++)
    {
        printf("%d�� ����: ", (i + 1)); _ = scanf("%d", &array[i]);
    }

    //[2] ó�� 
    for (int i = 0; i < N; i++)
    {
        tot += array[i]; // ���� ���ϱ� 
    }

    //[3] ��� 
    printf("%d���� ����: %d\n", N, tot);

    return 0;
}
