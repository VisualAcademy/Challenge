// �迭�� ���� while ������ �ݺ��ؼ� ����ϱ�
#include <stdio.h>

int main(void)
{
    char see[] = "C language\n";

    int index = 0;
    while (see[index] != '\0')
    {
        putchar(see[index]);
        index++;
    }

    return 0;
}
