#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("AAA < BBB: %d\n", strcmp("AAA", "BBB")); // -1
    printf("AAA = AAA: %d\n", strcmp("AAA", "AAA")); // 0
    printf("ZZZ > AAA: %d\n", strcmp("ZZZ", "AAA")); // 1

    return 0;
}
