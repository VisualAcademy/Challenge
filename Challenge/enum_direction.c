// enum_direction.c / ������.c
// �������� ����� ���ڿ� ���ȭ 
#include <stdio.h>

// ������ ����: �����¿�
enum Direction
{
    Top,	    // 0
    Bottom,	    // 1
    Left = 10,  // 10 => �ε��� ���� ���ο� ���� ������ �ʱ�ȭ 
    Right	    // 11
};

int main(void)
{
    printf("%d\n", Top); // 0 
    printf("%d\n", Bottom); // 1
    printf("%d\n", Left); // 10
    printf("%d\n", Right); // 11

    return 0;
}
