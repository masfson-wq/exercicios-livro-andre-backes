#include <stdio.h>

int main() {
    int num1, num2;
    int result_esq, result_dir;

    printf("Digite o primeiro numero (o valor): ");
    scanf("%d", &num1);

    printf("Digite o segundo numero (quantas casas deslocar): ");
    scanf("%d", &num2);

    // Deslocamento a esquerda: num1 * (2 elevado a num2)
    result_esq = num1 << num2;

    // Deslocamento a direita: num1 / (2 elevado a num2)
    result_dir = num1 >> num2;

    printf("\n--- RESULTADOS --- \n");
    printf("%d deslocado %d vezes a esquerda (<<): %d\n", num1, num2, result_esq);
    printf("%d deslocado %d vezes a direita (>>): %d\n", num1, num2, result_dir);

    return 0;
}