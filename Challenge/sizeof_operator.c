// sizeof_operator.c
//[?] sizeof �����ڷ� ������ ������ ũ�� ���ϱ�
#include <stdio.h>

int main(void)
{
    printf("sizeof(������ ����)\n");
    printf("  char ����: %llu byte\n", sizeof(char));
    printf("   int ����: %llu byte\n", sizeof(int));
    printf("  long ����: %llu byte\n", sizeof(long));
    printf(" float ����: %llu byte\n", sizeof(float));
    printf("double ����: %llu byte\n", sizeof(double));

    return 0;
}
