// ��� �Լ�(Recursion)
#include <stdio.h>

// 3�� �����ڸ� ����� factorial ���ϱ�
int fact(int n)
{
    return (n > 1) ? n * fact(n - 1) : 1;
}

// ��� �Լ��� ����� factorial �Լ� �����: ��, ����Լ��� tree ������ ���� Ž���� ����
int factorial(int n)
{
    // ����
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // ��� ȣ��
    return n * factorial(n - 1);
}

// �ܼ��� factorial�� �� ����� ����
int factorial_for(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i; // ((((1 * 1) * 2) * 3) * 4)
    }
    return result;
}

int main(void)
{
    // ��� ȣ���� ����Ͽ� factorial�� ���ϱ�: 4! = 4 * 3 * 2 * 1 = 24
    printf("%d\n", 4 * 3 * 2 * 1); // 24
    printf("%d\n", factorial_for(4)); // 24
    printf("%d\n", factorial(4)); // 24
    printf("%d\n", fact(4)); // 24

    return 0;
}
