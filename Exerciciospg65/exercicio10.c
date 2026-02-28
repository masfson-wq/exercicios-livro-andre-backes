#include <stdio.h>

int main() {
    // Valor total do prêmio
    double total_premio = 780000.00;
    
    // Variáveis para os ganhadores
    double primeiro, segundo, terceiro;

    // Cálculos
    primeiro = total_premio * 0.46; // 46%
    segundo = total_premio * 0.32;  // 32%
    terceiro = total_premio * (1 - 0.46 - 0.32); // O restante (22%)

    // Exibição dos resultados
    printf("Valor total do concurso: R$ %.2f\n", total_premio);
    printf("----------------------------------\n");
    printf("O primeiro ganhador recebe (46%%): R$ %.2f\n", primeiro);
    printf("O segundo ganhador recebe (32%%): R$ %.2f\n", segundo);
    printf("O terceiro ganhador recebe (22%%): R$ %.2f\n", terceiro);

    return 0;
}