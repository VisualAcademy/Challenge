// 하나의 입력된 문자에 따라서 'y'이면 "Yes"를, 'n'이면 "No"를, 
// 나머지는 모두 "Cancel"을 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    char input;
    printf("문자를 입력하세요. (y/n/c): ");
    input = getchar();

    if (input == 'y')
    {
        printf("Yes");
    }
    else
    {
        // else 문 안에 또 다른 if else 문 사용
        if (input == 'n')
        {
            printf("No");
        }
        else
        {
            printf("Cancel");
        }
    }

    return 0;
}
