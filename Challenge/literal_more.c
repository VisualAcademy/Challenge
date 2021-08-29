#include <stdio.h>

int main(void)
{
    printf("%d\n", 1234);           // 1234: ���� ���ͷ�
    printf("%d\n", 99);             // 99: 10�� ���� ���ͷ� 
    printf("0%o\n", 012);           // 012: 8�� ���� ���ͷ� 
    printf("0x%X\n", 0x1A);         // 0x1A: 16�� ���� ���ͷ� 
    printf("%f\n", 0.12f);          // 0.120000: �Ǽ� ���ͷ� 
    printf("%f\n", 0.34f);          // 0.340000: �Ǽ� ���ͷ� �Ҽ��� ǥ�� 
    printf("%f\n", 0.56F);          // 0.560000: �Ǽ� ���ͷ� �Ҽ��� ǥ�� 
    printf("%f\n", 1.0e-3f);        // 0.001000: �Ǽ� ���ͷ� ���� ǥ��� 
    printf("%f\n", 1.0E-3F);        // 0.001000: �Ǽ� ���ͷ� ���� ǥ��� 
    printf("%c\n", 'C');            // C: ���� ���ͷ� 
    printf("%s\n", "C language");   // C language: ���ڿ� ���ͷ� 
    printf("%p\n", NULL);           // 00000000: NULL ���ͷ�

    return 0;
}
