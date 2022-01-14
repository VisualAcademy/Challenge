// operator_max_size.c
//[?] ������ ���� 20 �̻��̸� 20���� �ʱ�ȭ, 20 �̸��̸� �ش� ������ �ʱ�ȭ
#include <stdio.h>

int main(void)
{
    const int max_size = 20; // �ִ��� 20���� ����(����)
    int page_size = 0;

    page_size = 10;
    // 3��(����) �����ڰ� �����̸� �� ��° ��(page_size)�� ��ȯ 
    page_size = (page_size > max_size) ? max_size : page_size; // 10 
    printf("%d\n", page_size); // 10

    page_size = 50;
    // 3��(����) �����ڰ� ���̸� ù ��° ��(max_size)�� ��ȯ 
    page_size = (page_size > max_size) ? max_size : page_size; // 20 
    printf("%d\n", page_size); // 20

    return 0;
}
