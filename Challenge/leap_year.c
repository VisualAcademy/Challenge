// �����: 
// * 4�⸶�� 2���޿� 1���� �߰��Ѵ�. 
// * 100�� �������� ������ �ƴϴ�.
// * 400�� �������� �����̴�.
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int year; 
    scanf("%d", &year);

    // ��ȿ�� �˻�: 1000~4000 ������ ���ڸ� �Է� 
    if (year < 1000 || year > 4000)
    {
        printf("wrong");
    }
    else
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }

    return 0;
}
