// �ϳ��� �Էµ� ���ڿ� ���� 'y'�̸� "Yes"��, 'n'�̸� "No"��, 
// �������� ��� "Cancel"�� ����ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
    char input;
    printf("���ڸ� �Է��ϼ���. (y/n/c): ");
    input = getchar();

    if (input == 'y')
    {
        printf("Yes");
    }
    else
    {
        // else �� �ȿ� �� �ٸ� if else �� ���
        if (input == 'n')
        {
            printf("No");
        }
        else
        {
            printf("Cancel");
        }
    }

    return 0;
}
