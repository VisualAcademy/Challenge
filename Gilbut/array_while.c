// �迭�� ���� while ������ �ݺ��ؼ� ����ϱ�
#include <stdio.h>

int main(void)
{
    char see[] = "C language\n"; // ���ڿ��� ������ �迭 ���� �� �ʱ�ȭ

    int index = 0; // �迭�� �ε����� 0���� �����ϱ⿡ 0���� index ���� �ʱ�ȭ
    while (see[index] != '\0') // null ���� ���ڸ� ���� ������ �ݺ�
    {
        putchar(see[index]); // ���� �ε����� ���ڸ� ���
        index++; // �ε����� 1 ����
    }

    return 0;
}
