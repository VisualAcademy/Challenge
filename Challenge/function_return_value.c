// ��ȯ���� �ִ� �Լ�
#include <stdio.h>

int square_function(int x) // �Է�: �Ű� ������ �ְ� 
{
    int r = x * x; // ó��: �Լ��� ����
    return r; // ���: ��ȯ���� �ִ� 
}

int main(void)
{
    int r = square_function(2); // �Լ� ȣ�� �� ��ȯ�� �ޱ� 
    printf("%d\n", r); // 4

    return 0;
}
