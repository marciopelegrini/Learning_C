#include <stdio.h>

int main()
{
    int numero, soma = 0;

    do {
        printf("Informe um número: ");
        scanf("%d", &numero);
        soma = soma + numero;
    } while (numero != 0);

    printf("A soma total dos numeros é: %d\n", soma);
    return 0;
}