//[?] �Ǻ���ġ ����: 1 1 2 3 5 8 13 21 ...
#include <stdio.h>

int main(void)
{
    // �ʱ� �Ǻ���ġ ������ ù ��°�� �� ��° ���ڸ� �����մϴ�.
    int first = 0;   // ù ��° ���ڸ� 0���� �����մϴ�.
    int second = 1;  // �� ��° ���ڸ� 1�� �����մϴ�.

    // while���� ����Ͽ� second�� ���� 20�� �ʰ����� �ʴ� ���� ������ �Ǻ���ġ ������ ����մϴ�.
    while (second <= 20)
    {
        // ���� �Ǻ���ġ ����(��, second)�� ����մϴ�.
        printf("%d\n", second);

        // temp�� first�� second�� ���� �����մϴ�.
        // �� ���� ���� �ݺ����� 'second' ���ڰ� �˴ϴ�.
        int temp = first + second;

        // 'first'�� ���� 'second' ���� �Ҵ��մϴ�.
        first = second;

        // 'second'�� ���� �� ������ ���� ������ 'temp' ���� �Ҵ��մϴ�.
        // �̴� ���� �Ǻ���ġ ���ڰ� �˴ϴ�.
        second = temp;
    }

    return 0;
}
