#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);  // �� ���� ����ȴ�
        goto exit;  // exit ���̺�� �̵�
    }

    printf("Hello World!\n");  // ������� �ʴ´�

exit:
    printf("exit\n");
    return 0;
}
