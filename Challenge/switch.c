#include <stdio.h>

int main(void)
{
    int answer = 0;
    int r = 0;
    printf("������ �Է��ϼ���.\n");

    // ���� �ϳ� �Է��ϰ� ���� �Է��� �� answer ������ ���
    r = scanf_s("%d", &answer); r = getchar();

    // ���ù�
    switch (answer)
    {
    case 1:
        printf("1�� �����߽��ϴ�.\n");
        break;
    case 2:
        printf("2�� �����߽��ϴ�.\n");
        break;
    case 3:
        printf("3�� �����߽��ϴ�.\n");
        break;
    default:
        printf("�׳� �����̱���.\n");
        break;
    }

    return 0;
}
