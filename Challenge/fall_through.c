#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    char alphabet; 

    scanf("%c", &alphabet);

    switch (alphabet)
    {
        case 'a': 
        case 'b':
            printf("a �Ǵ� b�Դϴ�.\n"); 
            break; 
        default:
            printf("a, b�� �ƴ� �ٸ� �����Դϴ�.\n");
            break;
    }

    return 0;
}
