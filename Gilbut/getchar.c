#include <stdio.h> // getchar()

int main(void)
{
    char blood_type;

    printf("당신의 혈액형은? ");

    blood_type = getchar(); // 문자 하나 입력 받아 blood_type 변수에 저장 

    printf("%c형입니다.\n", blood_type);

    return 0;
}
