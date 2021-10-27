//[?] for 문으로 0부터 4까지 2씩 증가시켜 출력하기 
#include <stdio.h>

int main(void)
{
    // 0부터 4까지 2씩 증가
    for (int i = 0; i < 5; i = i + 2)
    {
        printf("%d\n", i); // 0, 2, 4
    }

    return 0;
}
