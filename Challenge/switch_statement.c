#include <stdio.h>

int main(void)
{
    int choice = 0;
    int _ = 0;

    printf("가장 좋아하는 프로그래밍 언어는?\n");
    printf("1. C\t");
    printf("2. C++\t");
    printf("3. C#\t");
    printf("4. Java\n");

    // 사용자로부터 정수 하나를 입력받아 choice 변수에 저장
    _ = scanf_s("%d", &choice); _ = getchar();

    switch (choice)
    {
        case 1:
            printf("C 언어 선택\n");
            break;
        case 2:
            printf("C++ 선택\n");
            break;
        case 3:
            printf("C# 선택\n");
            break;
        case 4:
            printf("Java 선택\n");
            break;
        default:
            printf("C, C++, C#, Java가 아니군요.");
            break;
    }

    return 0;
}
