//[?] ������ �����͸� ������� [��������|��������] ����
#include <stdio.h>
#define N 5

// ���� �˰���(Sort Algorithm): ���� [����|ū] �����͸� �������� ������� �̵�
int main(void)
{
    //[1] Input: Data Structure(Array, List, Stack, Queue, Tree, DB, ...)
    int data[] = { 3, 2, 1, 5, 4 };
    int i, j, temp;

    //[2] Process: Selection Sort(���� ����) �˰���
    for (i = 0; i < N - 1; i++) // i = 0 to N - 1
    {
        for (j = i + 1; j < N; j++) // j = i + 1 to N
        {
            if (data[i] > data[j]) // �ε�ȣ ����: ��������(>), ��������(<)
            {
                // 3�ܰ� �ڵ忡 ���ؼ� ������ ��ȯ 
                temp = data[i];
                data[i] = data[j];
                data[j] = temp; 
            }
        }
    }

    //[3] Output
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", data[i]);
    }
    printf("\n");

    return 0;
}
