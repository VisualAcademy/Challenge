#include <stdio.h>

enum Animal { Mouse, Cow, Tiger };

int main(void)
{
    enum Animal animal = Tiger; // ������ ������ ������ ��� ����

    if (animal == Tiger)
    {
        printf("ȣ����\n");
    }

    return 0;
}
