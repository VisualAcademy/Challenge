#include <stdio.h>

int main(void)
{
    int i = 0; // �ʱ��
    loop_body:
        printf("C Language\n"); // ���๮
        i++; // ��ȭ��
    if (i < 3) // ���ǽ� 
    {
        goto loop_body; // loop_body ���̺�� �̵�
    }

    return 0; 
}