//[?] �Ǻ���ġ ����: 1 1 2 3 5 8 13 21 ...
#include <stdio.h>

int main(void)
{
    int first = 0;
    int second = 1;

    // while ������ �Ǻ���ġ ���� ǥ���ϱ� 
    while (second <= 20)
    {
        printf("%d\n", second);
        int temp = first + second;
        first = second;
        second = temp;
    }

    return 0;
}
