// �� ���� ���� ���ϱ� 
#include <stdio.h>

int main(void)
{
    int first = 3;
    int second = 5;
    int diff = 0; // ���̰��� ���� ������ ����� ���� 

    if (first > second)
    {
        diff = first - second; // �� ū ������ ���� �� ���� 
    }
    else
    {
        diff = second - first;
    }

    printf("%d�� %d�� ����: %d\n", first, second, diff); // 3�� 5�� ����: 2

    return 0;
}
