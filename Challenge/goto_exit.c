//[?] 중첩 루프 빠져나오기 
#include <stdio.h>

int main(void)
{
    int level = 0; 

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (level == 10)
            {
                goto stop2; 
            }
            level++; 
        }
    }

    printf("level: %d\n", level); // 25

stop1: printf("100\n");
stop2: printf("200\n");
stop3: printf("300\n");

    return 0;
}
