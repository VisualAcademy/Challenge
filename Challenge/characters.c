// characters.c
#include <stdio.h>

int main(void)
{
    char msg[] = "Hello"; // ���̸� �ڵ����� ����
    printf("size: %llu\n", sizeof(msg)); // size: 6

    printf("%s\n", msg); // Hello
    printf("%c\n", msg[0]); // H

    msg[0] = 'C'; // ù ���ڸ� C�� �ٲٱ�
    printf("%s\n", msg); // Cello

    return 0;
}
