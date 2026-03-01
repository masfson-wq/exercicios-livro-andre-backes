#include <stdio.h>

int main() {
    int numero;
    int centena, dezena, unidade;
    int invertido;

    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d", &numero);

    // Separando os dígitos
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    // Formando o número invertido
    invertido = unidade * 100 + dezena * 10 + centena;

    printf("Numero invertido: %d\n", invertido);

    return 0;
}