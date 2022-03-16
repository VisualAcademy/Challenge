//[?] for 반복문으로 알파벳 순서대로 출력하기 
#include <stdio.h>

int main(void)
{
    for (int i = 65; i <= 90; i++) // A(65)부터 Z(90)까지 반복
    {
        printf("%c", i); // ABCDEFGHIJKLMNOPQRSTUVWXYZ 
    }
    printf("\n");
    for (int i = 97; i <= 122; i++) // a(97)부터 z(122)까지 반복
    {
        printf("%c", i); // abcdefghijklmnopqrstuvwxyz 
    }
    printf("\n");
    for (char c = 'A'; c <= 'Z'; c++) // 'A'부터 'Z'까지 반복
    {
        printf("%c", c); // ABCDEFGHIJKLMNOPQRSTUVWXYZ 
    }
    printf("\n");

    return 0;
}
