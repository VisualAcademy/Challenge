//[?] ���ڿ��� ���ڷ� ��ȯ�ϱ� 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* str = "3.141592����";

    int i = atoi(str);      // ���ڿ��� int �������� ��ȯ
    long l = atol(str);     // ���ڿ��� long �������� ��ȯ
    float f = atof(str);    // ���ڿ��� float, double �������� ��ȯ

    printf("%d\n", i); // 3
    printf("%ld\n", l); // 3
    printf("%.7lf\n", f); // 3.1415920

    return 0;
}
