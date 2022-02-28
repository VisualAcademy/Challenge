#include <stdio.h>

int main(void)
{
    float f = 3.14f;

    int i = f; // 실수를 정수에 저장하면 컴파일 경고 발생 

    printf("%d\n", i); // 3 

    return 0;
}

// warning C4244: '초기화 중': 'float'에서 'int'(으)로 변환하면서 데이터가 손실될 수 있습니다.

