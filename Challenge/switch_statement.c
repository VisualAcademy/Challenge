#include <stdio.h>

int main(void)
{
    int choice = 0;
    int _ = 0;

    printf("���� �����ϴ� ���α׷��� ����?\n");
    printf("1. C\t");
    printf("2. C++\t");
    printf("3. C#\t");
    printf("4. Java\n");

    // ����ڷκ��� ���� �ϳ��� �Է¹޾� choice ������ ����
    _ = scanf_s("%d", &choice); _ = getchar();

    switch (choice)
    {
        case 1:
            printf("C ��� ����\n");
            break;
        case 2:
            printf("C++ ����\n");
            break;
        case 3:
            printf("C# ����\n");
            break;
        case 4:
            printf("Java ����\n");
            break;
        default:
            printf("C, C++, C#, Java�� �ƴϱ���.");
            break;
    }

    return 0;
}
