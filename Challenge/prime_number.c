//[?] Ư�� ���� �Է� �޾Ƽ�, �Ҽ����� �ƴ��� �Ǻ��ϴ� ���α׷�
// - 5�� �Ҽ�: 1�� 5���� ����� ����
// - 6�� �Ҽ��� �ƴ�: 1�� 6���� �ƴ� �߰��� 2�� 3�� ����� ���� 
// - 2���� �ش� ������ ���������� ���ؼ� ���������� 0�϶� ���� ���� �ش� ����� �Ҽ� 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    /// <summary>
    /// �Ҽ�(Prime Number): �ڿ��� �߿��� 1�� �ڱ� �ڽŸ��� ����� ������ �ڿ���
    /// </summary>
    //[1] Input
    int i;
    int number;
    scanf("%d", &number);

    //[2] Process: Prime Number(2���� n���� ������ �������� ���� �߻��� ������ �ݺ�)
    i = 1;
    do
    {
        i = i + 1; // 2���� n���� ��
        printf("%d %% %d = %d\n", number, i, number % i);
    } while (number % i != 0); // �Ҽ��� number�θ� ������ ������

    //[3] Output
    if (number == i)
    {
        printf("�Ҽ���\n");
    }
    else
    {
        printf("�Ҽ� �ƴ�\n");
    }

    return 0;
}
