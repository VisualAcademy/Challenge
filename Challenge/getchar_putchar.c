#include <stdio.h> // getchar(), putchar() 

int main(void)
{
    char c; 

    //[1] 표준 입력으로부터 문자 하나 입력: getchar()
    c = getchar(); 

    //[2] 표준 출력으로 문자 하나 출력: putchar()
    putchar(c);

    putchar('\n');

    return 0;
}
