#include <stdio.h>

int main() {
    double raio, altura, volume;
    double PI = 3.141592;

    // Leitura dos dados de entrada
    printf("Digite o valor do raio do cilindro: ");
    scanf("%lf", &raio);

    printf("Digite o valor da altura do cilindro: ");
    scanf("%lf", &altura);

    // Cálculo do Volume: V = PI * R² * altura
    volume = PI * (raio * raio) * altura;

    // Impressão do resultado com 4 casas decimais
    printf("O volume do cilindro circular e: %.4f\n", volume);

    return 0;
}