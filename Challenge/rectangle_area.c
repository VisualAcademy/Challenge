// rectangle_area.c
// C ��� �ڵ� ���� - �簢���� ���� ���ϱ� - �簢���� ���̴� �غ� ���ϱ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // ���� ���� �� �ʱ�ȭ 
    double width = 0.0; // �غ�
    double height = 0.0; // ����
    double area = 0.0; // ����
    int _ = 0; // ����(Discards)

    // ����ڷκ��� ������ �Է�
    printf("�غ�: "); _ = scanf("%lf", &width);
    printf("����: "); _ = scanf("%lf", &height);

    // ó��
    area = width * height;

    // ��� 
    printf("�簢���� ����: %.2lf\n", area);

    return 0;
}
