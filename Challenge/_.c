// char_array_string.c
#include <stdio.h>

int main(void)
{
    char hello[80]; // ���ڿ� ���� ���� ����
    char world[40] = "World"; // ���� �迭 ����� ���ÿ� �ʱ�ȭ 

    hello[0] = 'H'; // ���� �ϳ��� �Ҵ�
    hello[1] = 'e';
    hello[2] = 'l';
    hello[3] = 'l';
    hello[4] = 'o';
    hello[5] = '\0'; // NULL ���� ����: ���ڿ��� �� 

    printf("%s, %s!\n", hello, world);

    return 0;
}
