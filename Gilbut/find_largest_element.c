// 가장 큰 원소 찾기
#include <stdio.h>

int main(void)
{
    int arr[] = { 50, 23, 77, 12, 35, 64 }; // 정수 배열 선언 및 초기화
    int arr_length = sizeof(arr) / sizeof(arr[0]); // 배열의 길이 계산

    int max = arr[0]; // 가장 큰 원소를 저장할 변수. 초기값을 배열의 첫 번째 요소로 설정

    // 배열의 요소를 순회하며 가장 큰 값을 찾음
    for (int i = 1; i < arr_length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // 새로운 최대값 발견 시, max 변수에 저장
        }
    }

    // 가장 큰 원소 출력
    printf("가장 큰 원소: %d\n", max);

    return 0;
}
