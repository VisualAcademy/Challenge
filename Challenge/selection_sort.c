//[?] 무작위 데이터를 순서대로 [오름차순|내림차순] 정렬
#include <stdio.h>
#define N 5

// 정렬 알고리즘(Sort Algorithm): 가장 [작은|큰] 데이터를 왼쪽으로 순서대로 이동
int main(void)
{
    //[1] Input: Data Structure(Array, List, Stack, Queue, Tree, DB, ...)
    int data[] = { 3, 2, 1, 5, 4 };
    int i, j, temp;

    //[2] Process: Selection Sort(선택 정렬) 알고리즘
    for (i = 0; i < N - 1; i++) // i = 0 to N - 1
    {
        for (j = i + 1; j < N; j++) // j = i + 1 to N
        {
            if (data[i] > data[j]) // 부등호 방향: 오름차순(>), 내림차순(<)
            {
                // 3단계 코드에 의해서 데이터 교환 
                temp = data[i];
                data[i] = data[j];
                data[j] = temp; 
            }
        }
    }

    //[3] Output
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", data[i]);
    }
    printf("\n");

    return 0;
}
