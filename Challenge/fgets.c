#include <stdio.h>

int main(void)
{
    char name[20] = { NULL }; // 이름 저장 공간 준비

    // 표준 입력으로부터 입력받기: fgets()
    fgets(name, 20, stdin);

    printf("%s\n", name);

    return 0;
}
