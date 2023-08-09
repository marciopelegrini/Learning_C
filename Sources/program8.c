#include <stdio.h>

int main()
{
    // Vetores e strings
    char nome[50];
    printf("Qual seu nome? ");
    gets(nome);
    printf("Ola %s", nome);

    // vetores de caracteres
    char letras[26];
    int contador = 0;
    for (int i = 97; i <= 122; i++) {
        letras[contador] = i;
        contador++;
    }
    // Imprimindo
    for (int i = 0; i < 26; i++) {
        printf("%d => %c\n", letras[i], letras[i]);
    }

    // vetores de inteiros
    int numeros[10];

    // vetores de reais
    float valores[5];

    return 0;
}