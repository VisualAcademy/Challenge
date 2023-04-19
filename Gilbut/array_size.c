// 배열의 크기를 구하는 예제
#include <stdio.h>

int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 }; // 정수 배열 선언 및 초기화

    // 배열 전체의 크기를 구하기 위해 sizeof 연산자 사용
    int arr_size_bytes = sizeof(arr);

    // 배열 요소의 크기를 구하기 위해 sizeof 연산자 사용
    int element_size_bytes = sizeof(arr[0]);

    // 배열의 크기를 구하기 위해 배열 전체 크기를 요소 크기로 나눔
    int arr_length = arr_size_bytes / element_size_bytes;

    printf("배열 전체 크기 (바이트): %d\n", arr_size_bytes);
    printf("배열 요소 크기 (바이트): %d\n", element_size_bytes);
    printf("배열의 길이 (요소 개수): %d\n", arr_length);

    return 0;
}
