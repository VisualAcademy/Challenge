// text_center.c
// 문자열 가운데 정렬시키기 
#include <stdio.h>

// 텍스트 가운데 정렬
void text_center(int columns, char* text)
{
    int min_width = strlen(text) + (columns - strlen(text)) / 2;
    printf("%*s\n", min_width, text); // 최소 자리 만들고 문자열 채우기 
}

// 텍스트 가운데 정렬
void text_align_center(int columns, char* text)
{
    int indent = (columns - strlen(text)) / 2; // 왼쪽 여백 구하기 
    for (int i = 0; i < indent; i++)
    {
        putchar(' '); // 왼쪽 여백 채우기 
    }
    printf("%s\n", text);
}

int main(void)
{
    text_center(10, "Hello"); // __Hello
    text_align_center(10, "Hello"); // __Hello___
    text_center(20, "Hello, World!"); // ___Hello, World!
    text_align_center(20, "Hello, World!"); // ___Hello, World!____
    return 0;
}
