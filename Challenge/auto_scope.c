// auto_scope.c
// C 언어 코드 샘플 - 자동 변수 사용하기
#include <stdio.h>

void sub(int num)
{
    printf("%d\n", num); // 매개변수 num 출력 
}

int main(void)
{
    auto int num = 10; // 지역 변수 선언과 동시에 초기화
    printf("%d\n", num); // 10
    {
        auto int num = 12;
        printf("%d\n", num); // 12
        {
            auto int num = 21;
            printf("%d\n", num); // 21
            sub(num); // 21
        }
        sub(num); // 12
    }
    sub(num); // 10

    return 0;
}
