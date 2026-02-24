#include <stdio.h>

int main() {
    int n1, n2, n3;
    float soma; // Usamos float para o resultado prevalecer

    printf("--- Soma de 3 Inteiros (Resultado em Float) ---\n");

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    // Aqui ocorre a promoção: int + int + int vira um float ao ser atribuído
    soma = n1 + n2 + n3;

    printf("\nOs numeros digitados foram: %d, %d e %d\n", n1, n2, n3);
    
    // Usamos %.2f porque a variável 'soma' é float
    printf("A soma total eh: %.2f\n", soma);

    return 0;
}