// 배열 인덱스에 증감 연산자 사용하기
#include <stdio.h>

int main(void)
{
    // array 이름으로 1차원 배열 선언과 동시에 1, 2, 3으로 값 초기화
    int array[] = { 1, 2, 3 };
    int index = 0; // 배열의 인덱스는 0부터 시작하므로 index 변수를 0으로 초기화

    printf("%d\t", array[index++]); // array[0] 출력 후, index 값이 1로 증가
    printf("%d\t", array[index++]); // array[1] 출력 후, index 값이 2로 증가
    printf("%d\n", array[index++]); // array[2] 출력 후, index 값이 3으로 증가

    printf("%d\t", array[--index]); // index 값이 2로 감소 후, array[2] 출력
    printf("%d\t", array[--index]); // index 값이 1로 감소 후, array[1] 출력
    printf("%d\n", array[--index]); // index 값이 0으로 감소 후, array[0] 출력

    return 0;
}
