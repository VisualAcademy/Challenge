//[?] �� ���� ���ڿ��� �Է¹ް� ����ϴ� �Լ�: gets(), puts() 
#include <stdio.h>

int main(void)
{
    char buffer[80] = { NULL }; // ���ڿ� ������ ���� ����

    //[1] ǥ�� �Է����κ��� �� �� �Է¹ޱ�: gets()
    gets(buffer);

    //[2] ǥ�� ������� ���ڿ� ���: puts()
    puts(buffer);

    return 0;
}
