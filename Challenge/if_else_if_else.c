#include <stdio.h>

int main(void)
{
    int number1 = 10;
    int number2 = 20;

    if (number1 > number2) // ���� ó�� 1
    {
        printf("number1�� �� Ů�ϴ�.\n");
    }
    else if (number1 < number2) // ���� ó�� 2
    {
        printf("number2�� �� Ů�ϴ�.\n");
    }
    else
    {
        printf("�� �� �����ϴ�.\n");
    }

    return 0;
}
