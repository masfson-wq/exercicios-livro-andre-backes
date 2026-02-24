#include <stdio.h>

int main() {
    float reais, cotacao, dolares;

    // Entrada de dados
    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais);

    printf("Digite a cotação atual do dólar (US$): ");
    scanf("%f", &cotacao);

    // Processamento
    // Evita divisão por zero caso o usuário digite 0 na cotação
    if (cotacao > 0) {
        dolares = reais / cotacao;

        // Saída de dados
        printf("\n--- Resultado ---\n");
        printf("Com R$ %.2f e a cotação de US$ %.2f, você tem: US$ %.2f\n", reais, cotacao, dolares);
    } else {
        printf("\nErro: A cotação deve ser maior que zero.\n");
    }

    return 0;
}