//[!] �հ� �˰���(Sum Algorithm): �־��� ������ �־��� ���ǿ� �ش��ϴ� �ڷ���� �հ�
#include <stdio.h>

int main(void)
{
    //[1] Input: n���� ���� ����
    int scores[] = { 100, 75, 50, 37, 90, 95 };
    int n = sizeof(scores) / sizeof(int);
    int sum = 0;

    //[2] Process: �հ� �˰��� ����: �־��� ������ �־��� ����(���͸�)
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= 80)
        {
            //[?] n���� ���� ���� �߿��� 80�� �̻��� ������ �հ�
            sum += scores[i]; // SUM
        }
    }

    //[3] Output
    printf("%d���� ���� �� 80�� �̻��� ����: %d\n", n, sum);

    return 0;
}
