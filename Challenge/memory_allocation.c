// memory_allocation.c
// ���� �޸� �Ҵ�
#include <stdio.h>
#include <stdlib.h> // malloc �Լ� ����� ���� ��� ���� �߰� 

int main(void)
{
    //[1] ������ ���� ����
    int* num;

    //[2] �޸� �Ҵ�
    num = (int*)malloc(sizeof(int)); // �ݵ�� sizeof �����ڷ� ũ�� ����

    if (num) // ��ȿ�� �˻�: NULL�� �ƴϸ� num ���� ���
    {
        //[3] �Ҵ�� ������ �� ����
        *num = 1234;

        //[4] ������ ������ �� ����
        printf("%d\n", *num); // 1234 

        //[5] �޸� ����
        free(num);
    }

    return 0;
}
