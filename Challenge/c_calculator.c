#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;
    char opr;
    int result = 0;

    scanf("%d %c %d", &x, &opr, &y);

    switch (opr)
    {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
    }

    printf("%d %c %d = %d\n", x, opr, y, result);

    return 0;
}
