// C ��� �ڵ� ���� - �� ���� ũ�� �� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0; 
    int _ = 0; // ����(Discards)

    printf("ù ��° ��: "); _ = scanf("%d", &num1);
    printf("�� ��° ��: "); _ = scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d��(��) %d���� Ů�ϴ�.\n", num1, num2);
    }
    if (num1 < num2)
    {
        printf("%d��(��) %d���� �۽��ϴ�.\n", num1, num2);
    }
    if (num1 == num2)
    {
        printf("%d��(��) %d�� �����ϴ�.\n", num1, num2);
    }

    return 0;
}
