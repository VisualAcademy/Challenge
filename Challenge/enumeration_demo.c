#include <stdio.h>

// �켱������ ��� ������ �� �ִ� Priority ������ ����
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
