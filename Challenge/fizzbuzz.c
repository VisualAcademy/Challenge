#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) // 3�� ����̰� �׸��� 5�� ����� ��
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) // 3�� ����� ��
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) // 5�� ����� ��
        {
            printf("Buzz\n");
        }
        else // 3�� ��� �Ǵ� 5�� ��� �Ǵ� 3�� 5�� ������� �ƴ� ��
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
