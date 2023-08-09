#include <stdio.h>
#include "ajuda.h"

int main(void)
{
    int n1, n2, ret_s, ret_m;

    mensagem();

    printf("Informe o 1o numero: ");
    scanf("%d", &n1);

    printf("Informe o 2o numero: ");
    scanf("%d", &n2);

    ret_s = soma(n1, n2);
    printf("A soma de %d e %d  eh : %d\n", n1, n2, ret_s);

    ret_m = multiplicacao(n1, n2);
    printf("A multiplicacao de %d e %d  eh : %d\n", n1, n2, ret_m);

    return 0;
}