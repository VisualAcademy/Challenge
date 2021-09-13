#include <stdio.h>

enum Animal
{
    Horse,      // 0
    Sheep = 5,  // 1 => 5
    Monkey      // 2 => 6
};

int main(void)
{
    printf("%d\n", Monkey); // 6

    return 0;
}
