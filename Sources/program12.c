#include <stdio.h>

void incrementa(int* contador){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*contador));
    printf("O endereco de memoria e : %d\n", contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++contador);
    printf("O endereco de memoria e %d\n", &contador);

}

int main(void){
    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereco de memoria e : %d\n", &contador);

    incrementa(&contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++contador);
    printf("O endereco de memoria e %d\n", &contador);

    return 0;
}