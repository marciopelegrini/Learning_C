#include <math.h>
#include <stdio.h>

int main(void)
{
    int base = 2;
    int potencia = 10;

    printf("%d elevado a %d eh: %lf\n", base, potencia, pow(base, potencia));
    return 0;
}