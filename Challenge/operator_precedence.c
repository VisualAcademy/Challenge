// operator_precedence.c
// C ����� ������ �켱 ����: ��ȣ(�׷�) > ����/������ > ����/���� > ���ʿ��� ������
#include <stdio.h>

int main(void)
{
    printf("%d\n", 3 + 4 * 2); // ���ϱⰡ �켱: 3 * 8 => 11
    printf("%d\n", (3 + 4) * 2); // ��ȣ�� �켱: 7 * 2 => 14
    printf("%d\n", 10 / 5 * 2 + 1); // ���ʿ��� ����������: 2 * 2 + 1 => 5
    printf("%d\n", 15 / (5 * (2 + 1))); // ���� ��ȣ�� �켱: 15 / (5 * 3) => 1
    return 0;
}
