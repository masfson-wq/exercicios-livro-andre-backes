#include <stdio.h>

int main() {
    // Definindo a constante PI conforme o enunciado
    const double PI = 3.141592;
    double G, R;

    printf("Digite o ângulo em graus: ");
    scanf("%lf", &G);

    // Aplicando a fórmula: R = G * PI / 180
    R = G * (PI / 180);

    printf("%.2f graus equivalem a %.6f radianos.\n", G, R);

    return 0;
}