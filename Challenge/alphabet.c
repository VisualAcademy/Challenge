#include <stdio.h>

int main(void)
{
    char c;
    printf("���ĺ� �� �ڸ� �Է��ϼ���.\n");
    c = getchar(); // ����ڷκ��� ���� �ϳ� �Է�

    // if ������ ���ĺ� �������� Ȯ��
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("%c�� ���ĺ� �����Դϴ�.\n", c);
    }

    return 0;
}
