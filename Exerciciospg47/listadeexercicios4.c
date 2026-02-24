/*#include <stdio.h>
EXEMPLO DE CÓDIGO SITUAÇÃO PROPOSITALMENTE ERRADA PARA TESTE DE COMPILAÇÃO 
int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Impressão incorreta proposital
    printf("Numero digitado: %f\n", numero);

    return 0;
}*/

#include <stdio.h> // programa corrigido para compilar corretamente

int main() {
    double numero;

    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    printf("Numero digitado: %f\n", numero);

    return 0;
}
