#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Ordem inversa:\n");
    printf("%d\n", num2);
    printf("%d\n", num1);

    return 0;
}