#include <stdio.h>

int main(void)
{
    char ch;

    printf("input: ");
    ch = getchar(); // 'A'

    // �빮�ڿ� 32�� ���ؼ� �ҹ��ڷ� ����
    ch = ch + 32; // 'A' + 32 => �ҹ��� 'a'

    printf("output: %c", ch);

    return 0;
}
