// �Ǽ�(floating-point)�� ������(integer part)�� �Ҽ���(fractional part)�� �и��ϱ�
#include <stdio.h>
#include <math.h> // modf(), modff(), modfl()

int main(void)
{
    double d, i, f;

    d = 3.14; // ���� ������
    f = modf(d, &i); // �����ο� �Ҽ��� �и��ϱ�

    printf("%.2f�� �����δ� %.f�̰� �Ҽ��δ� %.2f�Դϴ�.", d, i, f);

    return 0;
}
