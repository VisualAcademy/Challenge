#include <stdio.h>

//[2] ����(Global)���� : static == shared : ����(����)
static int b;
int x = 100;

void hello(void) { }
void hi(void) { b = 10; printf("[3] b = %d\n", b); }

int main(void) {
    //[1] �ڵ����� : �⺻���� : ����(Local) ����
    int a; // auto int a;
    //[3] �������ͺ��� : ĳ�ø޸𸮿� ������ ����
    register int i = 0;

    a = 10; b = 100;
    {
        int a = 5;
        printf("[1] a = %d\n", a);
    }
    printf("[2] a = %d\n", a);
    hi();
    hello();

    return 0;
}
