#include <stdio.h>
#include <limits.h> // 정수 자료형의 최댓값과 최솟값에 대한 상수 정의

int main(void)
{
    // 정수 자료형의 크기: sizeof로 자료형의 크기를 구하고  %llu로 출력
    // 리눅스 환경의 GCC 컴파일러에서는 서식 지정자로 %llu 대신에 %lu로 출력해야 함
    printf("%llu %llu %llu %llu\n",
        sizeof(short), // 2
        sizeof(int), // 4
        sizeof(long), // 4
        sizeof(long long) // 8
    );
    return 0;
}
