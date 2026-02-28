#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função sqrt()

int main() {
    // Declaração das variáveis como 'double' para maior precisão decimal
    double a, b, h;

    printf("--- Cálculo da Hipotenusa (Teorema de Pitágoras) ---\n");

    // 1. Entrada de dados
    printf("Digite o valor do cateto 'a': ");
    scanf("%lf", &a); // %lf é usado para ler números do tipo double

    printf("Digite o valor do cateto 'b': ");
    scanf("%lf", &b);

    // 2. Processamento: h = sqrt(a² + b²)
    // Em C, usamos a função pow(base, expoente) para potências
    h = sqrt(pow(a, 2) + pow(b, 2));

    // 3. Saída de dados
    // %.2f limita o resultado a duas casas decimais
    printf("\nPara os catetos %.2f e %.2f, a hipotenusa h é: %.2f\n", a, b, h);

    return 0;
}