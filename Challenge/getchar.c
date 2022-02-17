// getchar.c
// getchar() 함수: 키보드로부터 하나의 문자 입력
#include <stdio.h> // getchar()

int main(void)
{
    char blood_type;

    printf("당신의 혈액형은? _\b");

    blood_type = getchar(); // 문자 하나 입력 받아 blood_type 변수에 저장 

    printf("%c형입니다.\n", blood_type);

    return 0;
}
