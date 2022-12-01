//[?] for 반복문으로 알파벳 2씩 증가해서 출력하기 
#include <stdio.h>

int main(void)
{
    for (int i = 65; i <= 90; i = i + 2) // i++ 대신에 i = i + 2를 사용 2씩 증가 
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
