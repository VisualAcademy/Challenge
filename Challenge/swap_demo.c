#include <stdio.h>

int main(void)
{
    int i = 100;
    int j = 200;
    int temp;

    printf("ó��: %d, %d\n", i, j); // 100, 200

    //[?] ������ ���� �ٲٱ�
    temp = i;   //[A] �ӽ� ������ i �� ���
    i = j;      //[B] i ���� j ������ �����
    j = temp;   //[C] j�� i ���� ��� �ִ� temp ������ �����

    printf("����: %d, %d\n", i, j); // 200, 100

    return 0;
}
