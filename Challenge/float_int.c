#include <stdio.h>

int main(void)
{
    float f = 3.14f;

    int i = f; // �Ǽ��� ������ �����ϸ� ������ ��� �߻� 

    printf("%d\n", i); // 3 

    return 0;
}

// warning C4244: '�ʱ�ȭ ��': 'float'���� 'int'(��)�� ��ȯ�ϸ鼭 �����Ͱ� �սǵ� �� �ֽ��ϴ�.

