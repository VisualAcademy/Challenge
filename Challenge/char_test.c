// ��ҹ��� �����ϱ� 
#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    char c;

    // �ַܼκ��� ���� �ϳ� �Է� �ޱ�
    printf("���� �빮�� �Ǵ� �ҹ��� �ϳ��� �Է��ϼ���.\n");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c�� �빮���Դϴ�.\n", c);
    }
    else
    {
        printf("%c�� �ҹ����Դϴ�.\n", c);
    }

    return 0;
}
