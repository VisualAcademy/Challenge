// scanf_multi_line.c
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char name[20];
    int age;
    char nick[20];
    int _;

    printf("�Է�\n----\n");
    printf("�̸�: "); _ = scanf(" %s", name); // ���� ������ �տ� ���� �ϳ� �߰� 
    printf("����: "); _ = scanf(" %d", &age);
    printf("����: "); _ = scanf(" %s", nick);

    printf("\n���\n----\n");
    printf("�̸�: %s\n", name);
    printf("����: %d\n", age);
    printf("����: %s\n", nick);

    return 0;
}
