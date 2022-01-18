// 배열의 값을 while 문으로 반복해서 출력하기
#include <stdio.h>

int main(void)
{
    char see[] = "C language\n";

    int index = 0;
    while (see[index] != '\0')
    {
        putchar(see[index]);
        index++;
    }

    return 0;
}
