#include <stdio.h>

#ifndef PI
#define PI 3.1415
#endif

int main(void)
{
    int valor = 5;

    valor = 456;

    printf("O valor e: %d\n", valor);

    #ifdef PI
        printf("O valor de PI e: %f\n", PI);
    #endif

    return 0;
}