// 올림(ceil)과 내림(floor) 함수 사용하기 
#include <stdio.h>
#include <math.h> // ceil(), floor() 

int main(void)
{
    // 원본
    printf("%.2f\n", 3.14); // 3.14

    // 올림
    printf("%.2f\n", ceil(3.14)); // 4.00

    // 내림
    printf("%.2f\n", floor(3.14)); // 3.00

    return 0;
}
