//[?] ������ �����͸� ������� [��������(ASC)|��������(DESC)] ����
// ��ǰ(����) ���� �˰���(Bubble Sort Algorithm): 
// ���� [����|ū] �����͸� ���������� ������� �̵�
#include <stdio.h>

int main(void)
{
    //[1] Input
    int data[5] = { 3, 2, 1, 5, 4 };
    int N = 5;

    //[2] Process: Bubble Sort(��ǰ ����) �˰���: 
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 1; j < (N - i); j++)
        {
            if (data[j - 1] < data[j]) // �ε�ȣ ����: ��������(>), ��������(<)
            {
                int temp = data[j - 1];
                data[j - 1] = data[j];
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
