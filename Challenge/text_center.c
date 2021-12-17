#include <stdio.h>

// �ؽ�Ʈ ��� ����
void text_center(int columns, char* text)
{
    int min_width = strlen(text) + (columns - strlen(text)) / 2;
    printf("%*s\n", min_width, text); // �ּ� �ڸ� ����� ���ڿ� ä���
}

// ��Ʈ�� ��� ����: indent ���ϰ� putchar()�Լ��� �鿩���� 
void text_align_center(int columns, char* text)
{
    int indent = (columns - strlen(text)) / 2; // ���� ���� ���ϱ� 
    for (int i = 0; i < indent; i++) 
    {
        putchar(' '); // ���� ���� ä��� 
    }
    printf("%s\n", text);
}

int main(void)
{
    text_center(10, "Hello"); // __Hello
    text_align_center(10, "Hello"); // __Hello___
    text_center(20, "Hello, World!"); // ___Hello, World!
    text_align_center(20, "Hello, World!"); // ___Hello, World!____

    return 0;
}
