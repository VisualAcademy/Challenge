//[?] ���� �ϳ��� �Է� �޾�, 2���� �ش� �������� �����ϴ� ��� �Ҽ��� ã�Ƽ� ���
// ��: 2 ~ 20������ ����: 2, 3, 5, 7, 11, 13, 17, 19 -> 8�� 
#define _CRT_SECURE_NO_WARNINGS // scanf() ���� ��� ���� ������ ���� ����
#include <stdio.h>

int main(void)
{
    //[1] Input
    int sum = 0; // �Ҽ� �հ�
    int count = 0; // �Ҽ� ���� 
    int sw = 1; // �Ҽ�(1)������ Ȯ���ϴ� ����ġ ����(flag) 
    int number = 0; // 2 ~ number������ �� �� �Ҽ��� ���� 
    scanf("%d", &number);

    //[2] Process: Prime Number -> Count
    for (int i = 2; i <= number; i++) // 2���� n���� �ݺ��ϸ鼭 �Ҽ� �Ǻ�
    {
        sw = 1; // �ϴ� ��� �ݺ����� �Ҽ��� ���� ����

        // 2���� �����(i) - 1���� �������� �� ������ �������� �Ҽ��� �ƴ�
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                sw = 0;
                break;
            }
        }

        if (sw)
        {
            printf("%d\t", i);
            count++; // COUNT
            sum = sum + i; // SUM 

            if (count % 5 == 0)
            {
                printf("\n"); // �ٹٲ�
            }
        }
    }

    printf("\n");

    //[3] Output
    printf("2���� %d������ �Ҽ��� ����: %d\n", number, count);
    printf("2���� %d������ �Ҽ��� �հ�: %d\n", number, sum);

    return 0;
}
