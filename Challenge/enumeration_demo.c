#include <stdio.h>

// 우선순위를 묶어서 관리할 수 있는 Priority 열거형 생성
enum Priority
{
    High,
    Normal,
    Low
};

int main(void)
{
    enum Priority high = High;
    enum Priority normal = Normal;
    enum Priority low = Low;

    printf("%d, %d, %d\n", high, normal, low);

    return 0;
}
