#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n--- RESULTADOS --- \n");
    printf("Numero original: %d\n", numero);
    
    // Mostra o deslocamento para a esquerda (Multiplica por 2)
    printf("Deslocamento a esquerda (<< 1): %d\n", numero << 1);
    
    // Mostra o deslocamento para a direita (Divide por 2)
    printf("Deslocamento a direita (>> 1): %d\n", numero >> 1);

    return 0;
}