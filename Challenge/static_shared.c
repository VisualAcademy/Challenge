// static_shared.c
// C ��� �ڵ� ���� - ����(����) ���� ����ϱ�
#include <stdio.h>

void func1(void);
void func2(void);

static int num = 200; // ��� �Լ����� ����(Shared)�ؼ� ��� ������ ���� ���� 

int main(void)
{
    auto int num = 1234; // ���� ���� num
    func1(); // 20
    func2(); // 210
    printf("[3] main.num -> %d\n", num); // 1234

    return 0;
}

void func1(void)
{
    auto int num = 20; // ���� ���� num
    printf("[1] func1.num -> %d\n", num); // 20
}

void func2(void)
{
    num += 10; // ���� ���� num
    printf("[2] (global).num -> %d\n", num); // 210
}
