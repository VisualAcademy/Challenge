#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    int score = 0; 
    printf("����: ");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("�ݸ޴�");
    }
    else
    {
        if (score >= 80)
        {
            printf("���޴�");
        }
        else
        {
            if (score >= 70)
            {
                printf("���޴�");
            }
            else
            {
                printf("��޴�");
            }
        }
    }

    printf("�� �����Ͽ����ϴ�.\n");

    return 0;
}
