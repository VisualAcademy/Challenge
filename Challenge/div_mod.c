// �������� �����ִ� ������ �Լ� ����ϱ� 
#include <stdio.h>
#include <stdlib.h> // div(), ldiv()
#include <math.h> // fmod()

int main(void)
{
    div_t r; // div_t: div() �Լ��� ��ȯ�� ����
    ldiv_t m; // ldiv_t: ldiv() �Լ��� ��ȯ�� ����
    double d;  // double: fmod() �Լ��� ��ȯ�� ���� 
    //[1] ����(int) ������
    r = div(5, 3);
    printf("��: %d, ������: %d\n", r.quot, r.rem); // 1, 2

    //[2] ����(long) ������
    m = ldiv(3, 5);
    printf("��: %ld, ������: %ld\n", m.quot, m.rem); // 0, 3

    //[3] �Ǽ� ������
    d = fmod(3.14, 3.12); // 0.02
    printf("������: %.2f\n", d);

    return 0;
}
