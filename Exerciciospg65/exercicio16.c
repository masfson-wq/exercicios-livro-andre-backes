#include <stdio.h>

int main() {
    int numero, mult, div;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Desloca 1 bit para a esquerda (Multiplica por 2)
    mult = numero << 1;

    // Desloca 1 bit para a direita (Divide por 2)
    div = numero >> 1;

    printf("Multiplicacao por 2: %d\n", mult);
    printf("Divisao por 2: %d\n", div);

    return 0;
}