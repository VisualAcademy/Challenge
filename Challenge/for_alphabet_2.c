//[?] for �ݺ������� ���ĺ� 2�� �����ؼ� ����ϱ� 
#include <stdio.h>

int main(void)
{
    for (int i = 65; i <= 90; i = i + 2) // i++ ��ſ� i = i + 2�� ��� 2�� ���� 
    {
        printf("%c", i); // ACEGIKMOQSUWY 
    }
    printf("\n");
    for (int i = 97; i <= 122; i = i + 2)
    {
        printf("%c", i); // acegikmoqsuwy 
    }
    printf("\n");
    for (char c = 'A'; c <= 'Z'; c = c + 2)
    {
        printf("%c", c); // ACEGIKMOQSUWY 
    }
    printf("\n");

    return 0;
}
