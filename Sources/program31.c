#include <stdio.h>

#ifndef PI
#define PI 3.1415
#endif

int main(void)
{
    int valor = 5;

    valor = 456;

    printf("O valor e: %d\n", valor);
    printf("O valor de PI e: %f\n", PI);
    return 0;
}