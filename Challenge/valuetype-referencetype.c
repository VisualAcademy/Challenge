// valuetype-referencetype.c
// ���� ������ ������ ������ ���� 
#include <stdio.h>

void plus(int* p) // �Ű� ������ �����͸� ���� 
{
    *p = *p + 10; // �������� ���ؼ� main �Լ��� i ���� ���� ����
    printf("plus function: *p: %d\n", *p);
}

int main(void)
{
    int i = 10; // main�� plus���� ������ ���� �������� ���
    int j = 20; // ���� ���� ����� ���ÿ� �ʱ�ȭ

    int* p; // ������ ���� ���� 
    p = &i; // ������ ������ ���� ���� ���� 

    plus(p); // �Ѱ��� ������ ������ ���� 10 ���� 

    printf("main function: i: %d, j: %d, *p: %d\n", i, j, *p);

    return 0; 
}
