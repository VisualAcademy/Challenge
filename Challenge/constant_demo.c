//[?] ���(Constant): ������ �ʴ� ����, �б� ���� ����
#include <stdio.h>

int main(void)
{
    const int MAX = 100;        // ���� ������ ��� ����� ���ÿ� �ʱ�ȭ 
    const double NUM = 0.1;     // �Ǽ� ������ ��� ����� ���ÿ� �ʱ�ȭ 
    const char MY_GRADE = 'A';  // ���� ������ ��� ����� ���ÿ� �ʱ�ȭ 

    printf("%d, %.2lf, %c\n", MAX, NUM, MY_GRADE); // 100, 0.10, A

    return 0;
}
