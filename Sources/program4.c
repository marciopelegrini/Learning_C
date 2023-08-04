#include <stdio.h>

int main(){
    int numero, soma = 0;

    for(int i=0; i< 5; i++){
        printf("Informe um numero :");
        scanf("%d", &numero);
        // processamento
        soma += numero;
    }
    //Saida
    printf("A soma e %d", soma);

    return 0;
}