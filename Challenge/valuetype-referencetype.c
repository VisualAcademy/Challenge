// valuetype-referencetype.c
// ���� ������ ������ ������ ���� 
#include <stdio.h>

void plus(int* p) // �Ű� ������ �����͸� ���� 
{
    *p = *p + 10; // �������� ���ؼ� main �Լ��� i ���� ���� ����
    printf("*p = %d\n", *p);
}

int main(void)
{
    int i = 10; // main�� plus���� ������ ���� �������� ���
    int j = 20;

    int* p;
    p = &i;

    plus(p); // �Ѱ��� ������ ������ ���� 10 ���� 

    printf("i : %d, j = %d\n", i, j);

    return 0; 
}
