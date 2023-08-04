#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Qual é a dua idade? ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você é menor de idade.\n");
    } else if (idade > 18 && idade < 60) {
        printf("Você é adulto.\n");
    } else {
        printf("Você é idoso.\n");
    }

    printf("Sua idade é: %d\n", idade);

    return 0;
}