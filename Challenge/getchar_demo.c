// getchar_demo.c
// getchar() �Լ�: Ű����κ��� �ϳ��� ���� �Է�
#include <stdio.h> // getchar()

int main()
{
    char blood_type;

    printf("����� ��������? _\b");
    blood_type = getchar();

    printf("%c���Դϴ�.\n", blood_type);

    return 0;
}
