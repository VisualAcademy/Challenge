#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    // 입력 변수는 0으로 초기화
    int x = 0; // 첫 번째 숫자  
    int y = 0; // 두 번째 숫자  
    char opr; // 연산자 기호 문자  
    int result = 0; // 연산 결과  

    scanf("%d %c %d", &x, &opr, &y); // 3 + 5

    switch (opr)    // opr 연산자를 기준으로
    {
    case '+':       // 덧셈이면
        result = x + y;     // 더하고
        break;              // 종료
    case '-':       // 뺄셈이면 
        result = x - y;     // 빼고 
        break;              // 종료
    case '*':       // 곱셈이면 
        result = x * y;     // 곱하고 
        break;              // 종료 
    case '/':       // 나눗셈이면 
        result = x / y;     // 나누고 
        break;              // 종료
    }

    printf("%d\n", result);

    return 0;
}
