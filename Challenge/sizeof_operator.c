// sizeof_operator.c
//[?] sizeof 연산자로 데이터 형식의 크기 구하기
#include <stdio.h>

int main(void)
{
    printf("sizeof(데이터 형식)\n");
    printf("  char 형식: %llu byte\n", sizeof(char));
    printf("   int 형식: %llu byte\n", sizeof(int));
    printf("  long 형식: %llu byte\n", sizeof(long));
    printf(" float 형식: %llu byte\n", sizeof(float));
    printf("double 형식: %llu byte\n", sizeof(double));

    return 0;
}
