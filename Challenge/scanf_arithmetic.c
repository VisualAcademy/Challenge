// 2개의 숫자를 콘솔로부터 입력받은 후 산술 연산 값 출력하기
#define _CRT_SECURE_NO_WARNINGS // scanf() 보안 경고에 따른 컴파일 에러 방지
#include <stdio.h>

int main(void)
{
    int x, y, _;

    printf("2개의 정수를 입력하세요: ");
    _ = scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, (x + y));
    printf("%d - %d = %d\n", x, y, (x - y));
    printf("%d * %d = %d\n", x, y, (x * y));
    printf("%d / %d = %d\n", x, y, (x / y));
    printf("%d %% %d = %d\n", x, y, (x % y));

    return 0;
}
