// getchar.c
// getchar() �Լ�: Ű����κ��� �ϳ��� ���� �Է�
#include <stdio.h> // getchar()

int main(void)
{
    char blood_type;

    printf("����� ��������? _\b");

    blood_type = getchar(); // ���� �ϳ� �Է� �޾� blood_type ������ ���� 

    printf("%c���Դϴ�.\n", blood_type);

    return 0;
}
