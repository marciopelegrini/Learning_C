#include <stdio.h>

int main()
{
    // inteiro
    int numero_inteiro; // 7, 89, 20, 1000

    // reais
    float nota1, nota2, media; // 2.33, 1.23
    double outra_media; // 23.4, 4.54 -> quase o dobro de float

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media das notas é: %.2f\n", media);

    return 0;
}