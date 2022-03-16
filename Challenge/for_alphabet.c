//[?] for 반복문으로 알파벳 순서대로 출력하기 
#include <stdio.h>

int main(void)
{
    for (int i = 65; i <= 90; i++)
    {
        printf("%c", i); // ABCDEFGHIJKLMNOPQRSTUVWXYZ 
    }
    printf("\n");
    for (int i = 97; i <= 122; i++)
    {
        printf("%c", i); // abcdefghijklmnopqrstuvwxyz 
    }
    printf("\n");
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c", c); // ABCDEFGHIJKLMNOPQRSTUVWXYZ 
    }
    printf("\n");

    return 0;
}
