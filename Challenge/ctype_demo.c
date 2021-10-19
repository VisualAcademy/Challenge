#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%d\n", isalpha('1')); // 0
    printf("%d\n", isalpha('A')); // 1
    printf("%d\n", isupper('z')); // 0
    printf("%d\n", isupper('Z')); // 1
    printf("%d\n", islower('Z')); // 0
    printf("%d\n", isspace('@')); // 0: 공백문자이면 0 이외의 값, 0

    return 0;
}
