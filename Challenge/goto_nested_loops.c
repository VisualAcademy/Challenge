// goto로 중첩 루프 한 번에 빠져나오기 
#include <stdio.h>

int main(void)
{
    int goal = 0; 

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (goal == 10)
            {
                goto exit; 
            }
            goal++;
        }
    }

exit: 
    printf("%d\n", goal); // 10

    return 0;
}
