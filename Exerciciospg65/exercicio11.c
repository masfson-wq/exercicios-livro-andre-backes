#include <stdio.h>

int main() {
    // Definição das variáveis
    double raio, area;
    double PI = 3.141592;

    // Leitura do valor do raio
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    // Cálculo da área: A = PI * raio^2
    area = PI * (raio * raio);

    // Impressão do resultado
    printf("A area do circulo correspondente e: %.4f\n", area);

    return 0;
}