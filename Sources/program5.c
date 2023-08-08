#include <stdio.h>

int main()
{
    int numero, soma = 0;

    // entrada
    printf("Informe um número: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma = soma + numero;
        printf("Informe um número: ");
        scanf("%d", &numero);
    }

    printf("A soma total dos numeros é: %d\n", soma);
    return 0;
}