/*#include <stdio.h>
EXEMPLO DE CÓDIGO SITUAÇÃO PROPOSITALMENTE ERRADA PARA TESTE DE COMPILAÇÃO
int main() {
    float numero;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // Impressão incorreta proposital
    printf("Numero digitado: %d\n", numero);

    return 0;
}*/

/*O que acontece?

O programa pode até compilar (às vezes com aviso), mas o comportamento é indefinido.

Motivo:

%d espera um int

estamos passando um float

no printf, o float é promovido automaticamente para double

então o printf está recebendo um double

mas %d manda ele interpretar os bits como se fossem um int

Resultado:

valores completamente errados

números “aleatórios”

possível comportamento imprevisível*/

#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // Impressão incorreta proposital
    printf("Numero digitado: %.1f\n", numero);

    return 0;
}
