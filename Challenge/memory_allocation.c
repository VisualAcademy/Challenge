// memory_allocation.c
// ���� �޸� �Ҵ�
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //[1] ������ ���� ����
    int* num;

    //[2] �޸� �Ҵ�
    num = malloc(sizeof(int));

    if (num) // ��ȿ�� �˻�: NULL�� �ƴϸ� num ���� ���
    {
        //[3] �Ҵ�� ������ �� ����
        *num = 1234;

        //[4] ������ ������ �� ����
        printf("%d\n", *num);

        //[5] �޸� ����
        free(num);
    }

    return 0;
}
