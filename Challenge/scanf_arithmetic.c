// 2���� ���ڸ� �ַܼκ��� �Է¹��� �� ��� ���� �� ����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, _;

    printf("2���� ������ �Է��ϼ���: ");
    _ = scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, (x + y));
    printf("%d - %d = %d\n", x, y, (x - y));
    printf("%d * %d = %d\n", x, y, (x * y));
    printf("%d / %d = %d\n", x, y, (x / y));
    printf("%d %% %d = %d\n", x, y, (x % y));

    return 0;
}
