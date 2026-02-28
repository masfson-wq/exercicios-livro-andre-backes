#include <stdio.h>

int main() {
    char letraMaiuscula, letraMinuscula;

    printf("--- Conversor de Maiúscula para Minúscula (ASCII) ---\n");

    // 1. Entrada de dados
    printf("Digite uma letra maiúscula: ");
    scanf(" %c", &letraMaiuscula); // O espaço antes de %c ignora o 'enter' anterior

    // 2. Processamento usando a lógica ASCII
    // Somamos 32 pois 'a' (97) - 'A' (65) = 32
    letraMinuscula = letraMaiuscula + 32;

    // 3. Saída de dados
    printf("\nLetra original: %c (ASCII: %d)\n", letraMaiuscula, letraMaiuscula);
    printf("Letra convertida: %c (ASCII: %d)\n", letraMinuscula, letraMinuscula);

    return 0;
}