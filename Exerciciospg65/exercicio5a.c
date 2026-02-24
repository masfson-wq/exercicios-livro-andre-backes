#include <stdio.h>

int main() {
    char nome[50];
    int idade, invalidez;
    int opcao = 1;

    printf("=== Portal de Analise de Beneficios ===\n");

    while (opcao != 0) {
        printf("\nNome do cidadao: ");
        scanf(" %[^\n]s", nome);

        printf("Idade atual: ");
        scanf("%d", &idade);

        printf("Possui laudo de invalidez/enfermidade? (1-Sim / 0-Nao): ");
        scanf("%d", &invalidez);

        // ANALISE MINUCIOSA:
        // O simbolo || significa "OU". 
        // A condicao sera verdadeira se PELO MENOS UMA das duas for real.
        if (idade >= 65 || invalidez == 1) {
            printf("\n>>> RESULTADO: Aposentadoria DEFERIDA para %s.\n", nome);
            
            // Um detalhe de mestre: explicar o porquê
            if (invalidez == 1) {
                printf("Motivo: Criterio de Enfermidade/Invalidez atingido.\n");
            } else {
                printf("Motivo: Criterio de Idade atingido.\n");
            }
        } 
        else {
            printf("\n>>> RESULTADO: Aposentadoria INDEFERIDA para %s.\n", nome);
            printf("Motivo: O cidadao nao cumpre os requisitos de idade ou saude.\n");
            printf("Faltam %d anos para o criterio de idade.\n", 65 - idade);
        }

        printf("\nVerificar outro caso? (1-Sim / 0-Sair): ");
        scanf("%d", &opcao);
    }

    printf("\nSistema encerrado com seguranca.\n");
    return 0;
}