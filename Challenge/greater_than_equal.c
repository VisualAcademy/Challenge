// 2���� ���� �Է��� �� �� �߿��� ū ���� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int first = 0, second = 0;
    printf("2���� ������ �Է��ϼ���. (ex: 3 5) => ___\b\b\b");
    scanf("%d %d", &first, &second);

    if (first >= second)
    {
        printf("ū ��: %d\n", first);
    }
    else
    {
        printf("ū ��: %d\n", second);
    }

    return 0;
}
