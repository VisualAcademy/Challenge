#include <stdio.h>

int main(void)
{
    //[1] ���ڿ� ���� ����� ���ÿ� �ʱ�ȭ 
    char message[] = "C Language";

    //[2] ���ڿ� ���: %s ���� ������ ���
    printf("%s\n", message); // C Language

    //[3] ���ڿ� ����: sizeof() ������ ���
    printf("���ڿ� ����: %llu\n", sizeof(message)); // 10 + 1

    //[4] ���ڿ� �߿��� ���� �ϳ��� [n - 1] ���·� ���: ��ġ�� 0��° ���ں��� ����
    printf("%c\n", message[0]); // C

    //[5] ���ڿ� �߿��� Ư�� ��ġ�� �ִ� ���� ����
    message[0] = 'Z'; // ù ���ڸ� 'Z'�� �ٲٱ�

    //[6] �ٽ� ��ü ���ڿ� ���
    printf("%s\n", message); // Z Language

    return 0;
}
