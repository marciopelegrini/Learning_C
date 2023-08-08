#include <math.h>
#include <stdio.h>

int main(void)
{
    int angulo = 45;
    float res = sin(angulo);

    printf("O seno de %d é %f", angulo, res);
    return 0;
}