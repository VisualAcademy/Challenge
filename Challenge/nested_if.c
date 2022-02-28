// 중첩된 if 조건문
#include <stdio.h>

int main(void)
{
    char name = 'C';
    int version = 22;

    if (name == 'C')
    {
        if (version == 22)
        {
            printf("%c %d\n", name, version);
        }
    }

    return 0;
}
