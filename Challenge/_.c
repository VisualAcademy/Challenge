// char_array_strcpy.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[80];

    strcpy(buffer, "C Language");

    printf("%s\n", buffer);

    return 0;
}
