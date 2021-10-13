#include <stdio.h>

int main(void)
{
    // 상수: 변하지 않는 값
    const char* name = "백두산";

    // 변수: 변하는 값
    int age = 102;

    // 이름: 백두산, 나이: 102
    printf("이름: %s, 나이: %d\n", name, age);

    return 0;
}
