#include <stdio.h>

int main(void)
{
    //[1] �Ϲ� ���� ����� ���ÿ� �ʱ�ȭ
    int num = 1234;

    //[2] ������ ���� ����� ���ÿ� num ������ ptr ������ ����(Reference)
    int* ptr = &num; // & ��ȣ�� num ������ �ּڰ��� �о� ������ ������ ����

    //[3] ptr ������ ������ �� ���: ������(Dereference)
    printf("%d\n", *ptr); // * ��ȣ�� ptr ������ �����ϰ� �ִ� ���� ���� ���

    return 0;
}
