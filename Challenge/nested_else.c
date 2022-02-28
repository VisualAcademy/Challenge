// 하나의 입력된 문자에 따라서 'y'이면 "Yes"를, 'n'이면 "No"를, 
// 나머지는 모두 "Cancel"을 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char input;
    printf("문자를 입력하세요. (y/n): ");
    scanf("%c", &input);

    if (input == 'y')
    {
        printf("Yes");
    }
    else // y가 아닌 경우
    {
        // else 문 안에 또 다른 if else 문 사용
        if (input == 'n')
        {
            printf("No");
        }
        else // y도 아니고 n도 아닌 경우 
        {
            printf("Cancel");
        }
    }

    return 0;
}
