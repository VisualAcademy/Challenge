#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    int weather = 0;
    int _ = 0;
    printf("���� ������ �����? (����(1), �帲(2), ��(3), ��(4), ...)\n");

    _ = scanf("%d", &weather);

    switch (weather)
    {
        case 1:
            printf("���� ������ ������.");
            break;
        case 2:
            printf("���� ������ �帮����.");
            break;
        case 3:
            printf("���� ������ �� ���±���.");
            break;
        default:
            printf("Ȥ�� ���� ��������?");
            break;
    }

    return 0;
}
