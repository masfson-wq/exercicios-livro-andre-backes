#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Digite dois valores float separados por espaço: ");
    scanf("%f %f", &valor1, &valor2);
    printf("%.2f\\%.2f\n", valor2, valor1);

    return 0;
}