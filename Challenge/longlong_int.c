#include <stdio.h>

int main(void)
{
    long long num1 = 9223372036854775807LL; // long long�� �ִ� 
    int num2 = num1; // �����Ϸ� ��� �߻�: '__int64'���� 'int'(��)�� ��ȯ�ϸ鼭 �����Ͱ� �սǵ� �� �ֽ��ϴ�.
    printf("%d\n", num2); // -1: �սǵ� �� ���

    long long num3 = 1234LL; // int ������ long long ������
    int num4 = num3; // �����Ϸ� ��� �߻�: '__int64'���� 'int'(��)�� ��ȯ�ϸ鼭 �����Ͱ� �սǵ� �� �ֽ��ϴ�.
    printf("%d\n", num4); // 1234: ��ȯ�� �� ���

    long long num5 = 1234LL; // // int ������ long long ������
    int num6 = (int)num5; // �����Ϸ� ��� ����
    printf("%d\n", num4); // 1234

    return 0;
}
