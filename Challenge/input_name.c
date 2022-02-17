// 예제: 콘솔로부터 이름을 입력받아 출력하는 프로그램   
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char name[20]; // 문자열, 20자까지 저장 

    printf("이름을 입력하세요: ");
    scanf("%s", name); // 문자열은 %s, 배열은 이름만 지정하고 & 기호 생략

    printf("안녕하세요. %s님\n ", name);

    return 0;
}
