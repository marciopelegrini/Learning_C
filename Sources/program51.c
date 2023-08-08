#include <math.h>
#include <stdio.h>

int main(void)
{
    int angulo = 45;
    float res = cos(angulo);

    printf("O coseno de %d é %f", angulo, res);
    return 0;
}