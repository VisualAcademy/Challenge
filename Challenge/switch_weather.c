#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
    int weather = 0;
    int _ = 0;
    printf("¿À´Ã ³¯¾¾´Â ¾î¶²°¡¿ä? (¸¼À½(1), Èå¸²(2), ºñ(3), ´«(4), ...)\n");

    _ = scanf("%d", &weather);

    switch (weather)
    {
        case 1:
            printf("¿À´Ã ³¯¾¾´Â ¸¼±º¿ä.");
            break;
        case 2:
            printf("¿À´Ã ³¯¾¾´Â Èå¸®±º¿ä.");
            break;
        case 3:
            printf("¿À´Ã ³¯¾¾´Â ºñ°¡ ¿À´Â±º¿ä.");
            break;
        default:
            printf("È¤½Ã ´«ÀÌ ³»¸®³ª¿ä?");
            break;
    }

    return 0;
}
