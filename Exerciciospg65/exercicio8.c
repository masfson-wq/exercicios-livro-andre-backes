#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // 1. Entrada de dados
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // 2. Cálculo da conversão
    // Usamos 9.0 e 5.0 para garantir que a divisão seja feita com números reais (float)
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    // 3. Saída do resultado
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}