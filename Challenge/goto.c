#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);  // 한 번만 실행된다
        goto exit;  // exit 레이블로 이동
    }

    printf("Hello World!\n");  // 실행되지 않는다

exit:
    printf("exit\n");
    return 0;
}
