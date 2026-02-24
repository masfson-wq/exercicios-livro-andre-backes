#include <stdio.h>

int main() {

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    //Calcula o antecessor e o sucessor
    int antecessor = numero - 1;
    int sucessor = numero + 1;

    //Imprime o resultado
    printf("O antecessor de %d é %d\n", numero, antecessor);
    printf("O sucessor de %d é %d\n", numero, sucessor);




    return 0;
}