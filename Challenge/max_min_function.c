// �Լ��� ����Ͽ� ū ���� ���� �� ���ϱ� 
#include <stdio.h>

// max �Լ�: �� �� �߿��� ū ���� ��ȯ�����ִ� �Լ�
int max(int x, int y)
{
    return (x > y) ? x : y; // 3�� �����ڷ� ū �� ���ϱ� 
}

// min �Լ�: �� �� �߿��� ���� ���� ��ȯ�����ִ� �Լ�
int min(int x, int y)
{
    // if else ������ ���� �� ���ϱ� 
    if (x < y)
    {
        return x; // ���� ��
    }
    else
    {
        return y;
    }
}

int main(void)
{
    printf("%d\n", max(3, 5)); // 5
    printf("%d\n", min(-3, -5)); // -5

    return 0;
}
