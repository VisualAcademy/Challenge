//[?] �� ���� ���ڿ��� �Է¹ް� ����ϴ� �Լ�: gets()
#include <stdio.h>

int main(void)
{
    char name[80] = { NULL }; // �̸� ���� ���� �غ�

    // ǥ�� �Է����κ��� �� �� �Է¹ޱ�: gets()
    gets(name);

    printf("%s\n", name);

    return 0;
}
