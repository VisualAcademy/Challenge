#include <stdio.h>

enum Animal { Mouse, Cow, Tiger };

int main(void)
{
    enum Animal animal = Tiger; // 열거형 변수에 열거형 상수 지정

    if (animal == Tiger)
    {
        printf("호랑이\n");
    }

    return 0;
}
