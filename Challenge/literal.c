#include <stdio.h>

int main(void)
{
    printf("%d\n", 1234);      // %d ���� ���ͷ�
    printf("%f  \n", 3.14f);      // %f �Ǽ� ���ͷ�(float)
    printf("%lf\n", 3.141592);  // %lf �Ǽ� ���ͷ�(double)
    printf("%Lf\n", 3.141592L);  // %Lf �Ǽ� ���ͷ�(long double)
    printf("%c\n", 'A');        // %c ���� ���ͷ�
    printf("%s\n", "HELLO");   // %s ���ڿ� ���ͷ�
    return 0;
}
