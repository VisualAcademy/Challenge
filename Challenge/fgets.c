#include <stdio.h>

int main(void)
{
    char name[20] = { NULL }; // �̸� ���� ���� �غ�

    // ǥ�� �Է����κ��� �Է¹ޱ�: fgets()
    fgets(name, 20, stdin);

    printf("%s\n", name);

    return 0;
}
