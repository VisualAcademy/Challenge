//[?] �ŵ����� �Լ� �����
#include <stdio.h>

int pow(int a, int b)
{
    int r = 1; // 1�� �ʱ�ȭ 
    int i = 0;

    for (i = 0; i < b; i++)
    {
        r *= a; // r = r * a; 
    }

    return r; // a ^ b
}

int main(void)
{
    int r = 0;

    r = pow(2, 10);
    printf("2�� 10��: %d\n", r); // 1024 

    r = pow(2, 20);
    printf("2�� 20��: %d\n", r); // 1048576

    return 0;
}
