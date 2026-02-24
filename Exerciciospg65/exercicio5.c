#include <stdio.h>

int main() {
    int idade, anoAtual, anoNascimento;

    printf("--- Descubra seu Ano de Nascimento ---\n");

    // 1. Coleta de dados
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano em que estamos: ");
    scanf("%d", &anoAtual);

    // 2. O cálculo (Processamento)
    anoNascimento = anoAtual - idade;

    // 3. Resultado
    printf("\n----------------------------------\n");
    printf("Se voce ja fez aniversario em %d,\n", anoAtual);
    printf("voce nasceu em: %d\n", anoNascimento);
    printf("----------------------------------\n");

    return 0;
}