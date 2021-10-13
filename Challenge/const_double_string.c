#include <stdio.h>

int main(void)
{
    //[1] 상수 선언과 동시에 초기화
    const double PI = 3.14;
    const char* SITE_NAME = "비주얼아카데미";

    //[2] 상수 참조
    printf("%.2f\n", PI); // 3.14
    printf("%s\n", SITE_NAME); // 비주얼아카데미

    return 0;
}
