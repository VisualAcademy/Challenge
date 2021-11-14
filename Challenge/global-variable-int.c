// global-variable-int.c
// ���� ����(Local Variable): �Լ� �ȿ��� ����� ����  
// ���� ����(Global Variable): �Լ� �ۿ��� ����� ���� 
#include <stdio.h>

int global_variable; // ���� ���� ����(�⺻������ �ʱ�ȭ)

int main(void)
{
    int local_variable = 1234; // ���� ���� ����� ���ÿ� �ʱ�ȭ

    printf("���� ����: %d\n", local_variable); // 1234
    printf("���� ����: %d\n", global_variable); // 0

    return 0; 
}
