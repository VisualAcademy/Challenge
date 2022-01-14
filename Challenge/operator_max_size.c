// operator_max_size.c
//[?] 들어오는 값이 20 이상이면 20으로 초기화, 20 미만이면 해당 값으로 초기화
#include <stdio.h>

int main(void)
{
    const int max_size = 20; // 최댓값을 20으로 고정(제한)
    int page_size = 0;

    page_size = 10;
    // 3항(조건) 연산자가 거짓이면 두 번째 식(page_size)이 반환 
    page_size = (page_size > max_size) ? max_size : page_size; // 10 
    printf("%d\n", page_size); // 10

    page_size = 50;
    // 3항(조건) 연산자가 참이면 첫 번째 식(max_size)이 반환 
    page_size = (page_size > max_size) ? max_size : page_size; // 20 
    printf("%d\n", page_size); // 20

    return 0;
}
