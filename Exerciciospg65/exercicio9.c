#include <stdio.h>

/*O que esse código faz 
  a) double: Usei double em vez de float para ter mais precisão nas casas decimais, já que o seu PI tem muitos números.
  b) const: Define que o valor de PI não vai mudar durante o programa.
  c) A lógica: O programa recebe o valor em graus, multiplica pelo valor de PI
     e divide pelo semicírculo de 180 para encontrar a medida em radianos.*/

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