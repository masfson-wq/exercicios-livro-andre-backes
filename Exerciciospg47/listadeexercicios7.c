#include <stdio.h>

/*Explicação:

%c é usado para ler um caractere.

O espaço antes de %c no scanf ignora espaços em branco pendentes.

(int)c faz a conversão explícita do caractere para inteiro.

O valor exibido corresponde ao código ASCII do caractere digitado.*/

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);  // espaço antes de %c evita problemas com ENTER
    printf("O valor inteiro do caractere digitado é: %d\n", (int)c);

    return 0;
}