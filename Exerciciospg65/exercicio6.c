#include <stdio.h>

int main() {
    float kmh, ms;

    // Entrada
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    // Processamento (conversão)
    ms = kmh / 3.6;

    // Saída
    printf("Velocidade em m/s: %.2f\n", ms);

    return 0;
}