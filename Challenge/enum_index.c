#include <stdio.h>

enum Animal { Rabbit, Dragon, Snake }; // 0, 1, 2

int main(void)
{
    enum Animal animal = Dragon;
    int num = animal; // 1
    printf("Animal.Dragon: %d\n", num);

    return 0;
}
