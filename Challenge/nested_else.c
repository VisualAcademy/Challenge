// �ϳ��� �Էµ� ���ڿ� ���� 'y'�̸� "Yes"��, 'n'�̸� "No"��, 
// �������� ��� "Cancel"�� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char input;
    printf("���ڸ� �Է��ϼ���. (y/n): ");
    scanf("%c", &input);

    if (input == 'y')
    {
        printf("Yes");
    }
    else // y�� �ƴ� ���
    {
        // else �� �ȿ� �� �ٸ� if else �� ���
        if (input == 'n')
        {
            printf("No");
        }
        else // y�� �ƴϰ� n�� �ƴ� ��� 
        {
            printf("Cancel");
        }
    }

    return 0;
}
