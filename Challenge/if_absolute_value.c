// if_absolute_value.c
// ����: if ������ ���� ���ϱ� 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int num; // �Է°� 
    int abs; // ����
    int _; // ����(Discards) 

    //[1] �Է�
    printf("���� �ϳ��� �Է��ϼ���: "); _ = scanf("%d", &num);

    //[2] ó��: ����(Absolute Value) ���ϱ� 
    if (num < 0)
    {
        abs = -num;
    }
    else
    {
        abs = num;
    }

    //[3] ��� 
    printf("%d�� ����: %d\n", num, abs);

    return 0;
}
