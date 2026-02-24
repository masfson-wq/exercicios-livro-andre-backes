#include <stdio.h>

int main() {
    // Definimos tudo como float para aceitar casas decimais em qualquer etapa
    float n1, n2, n3, soma, media;

    printf("--- Calculo de Media (Totalmente Float) ---\n");

    printf("Digite as três notas (ex: 7.5 8.0 6.3): ");
    // Mudamos o especificador para %f para ler números reais
    scanf("%f %f %f", &n1, &n2, &n3);

    soma = n1 + n2 + n3;
    media = soma / 3;

    printf("\nNotas digitadas: %.1f, %.1f e %.1f\n", n1, n2, n3);
    printf("Soma: %.2f | Media: %.2f\n", soma, media);

    // Estrutura de decisão
    if (media >= 7.0) {
        printf("Status: APROVADO\n");
    } 
    else if (media >= 5.0) {
        printf("Status: RECUPERACAO\n");
    } 
    else {
        printf("Status: REPROVADO\n");
    }

    return 0;
}