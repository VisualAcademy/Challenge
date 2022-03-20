#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char alphabet; 

    scanf("%c", &alphabet);

    switch (alphabet)
    {
        case 'a': 
        case 'b':
            printf("a 또는 b입니다.\n"); 
            break; 
        default:
            printf("a, b가 아닌 다른 문자입니다.\n");
            break;
    }

    return 0;
}
