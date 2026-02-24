#include <stdio.h>

int main() {
    char c;
    int i;
    float f;

    // Leitura das variáveis
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Digite um inteiro: ");
    scanf("%d", &i);

    printf("Digite um número real: ");
    scanf("%f", &f);

    // Impressão separadas por espaços
    printf("%c %d %.2f\n", c, i, f);

    // Impressão separadas por tabulação horizontal
    printf("%c\t%d\t%.2f\n", c, i, f);

    // Impressão uma em cada linha
    printf("%c\n%d\n%.2f\n", c, i, f);

    return 0;
}
