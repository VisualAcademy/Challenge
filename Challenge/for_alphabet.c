//[?] for �ݺ������� ���ĺ� ������� ����ϱ� 
#include <stdio.h>

int main(void)
{
    for (int i = 65; i <= 90; i++) // A(65)���� Z(90)���� �ݺ�
    {
        printf("%c", i); // ABCDEFGHIJKLMNOPQRSTUVWXYZ 
    }
    printf("\n");
    for (int i = 97; i <= 122; i++) // a(97)���� z(122)���� �ݺ�
    {
        printf("%c", i); // abcdefghijklmnopqrstuvwxyz 
    }
    printf("\n");
    for (char c = 'A'; c <= 'Z'; c++) // 'A'���� 'Z'���� �ݺ�
    {
        printf("%c", c); // ABCDEFGHIJKLMNOPQRSTUVWXYZ 
    }
    printf("\n");

    return 0;
}
