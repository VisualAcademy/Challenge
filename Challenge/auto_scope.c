// auto_scope.c
// C ��� �ڵ� ���� - �ڵ� ���� ����ϱ�
#include <stdio.h>

void sub(int num)
{
    printf("%d\n", num); // �Ű����� num ��� 
}

int main(void)
{
    auto int num = 10; // ���� ���� ����� ���ÿ� �ʱ�ȭ
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
