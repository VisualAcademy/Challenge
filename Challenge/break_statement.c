#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++) // 1부터 10까지 반복
    {
        printf("%d\n", i); // 인덱스 변수 i 출력

        if (i == 3)
        {
            break; // 현재 코드를 만나면 현재 for 문을 종료함
        }
    }

    return 0;
}
