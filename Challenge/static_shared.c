// static_shared.c
// C 언어 코드 샘플 - 정적(공유) 변수 사용하기
#include <stdio.h>

void func1(void);
void func2(void);

static int num = 200; // 모든 함수에서 공유(Shared)해서 사용 가능한 정적 변수 

int main(void)
{
    auto int num = 1234; // 지역 변수 num
    func1(); // 20
    func2(); // 210
    printf("[3] main.num -> %d\n", num); // 1234

    return 0;
}

void func1(void)
{
    auto int num = 20; // 지역 변수 num
    printf("[1] func1.num -> %d\n", num); // 20
}

void func2(void)
{
    num += 10; // 공유 변수 num
    printf("[2] (global).num -> %d\n", num); // 210
}
