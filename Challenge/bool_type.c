#include <stdio.h>
#include <stdbool.h> // true, false ��� 

int main(void)
{
    int x = 7;
    int y = 3;

    bool result = false; // bool Ÿ�� ������ false�� �ʱ�ȭ 

    result = x > y; // 1: true

    printf("%d\n", result); // 1

    return 0;
}
