#include <stdio.h>
#include <string.h> 

int main() {
    char nome[50];
    float n1, n2, n3, media;
    char continuar;
    
    // Nossos contadores (precisam começar em 0)
    int totalAprovados = 0;
    int totalRecuperacao = 0;
    int totalReprovados = 0;

    printf("=== Sistema Escolar com Estatisticas ===\n");

    do {
        printf("\nDigite o nome completo do aluno: ");
        scanf(" %[^\n]s", nome); 

        printf("Digite as 3 notas de %s: ", nome);
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3;

        printf("\n-------------------------------------------");
        printf("\nAluno: %s", nome);
        printf("\nMedia: %.2f", media);

        if (media >= 7.0) {
            printf("\nStatus: APROVADO!");
            totalAprovados++; // Soma 1 ao contador de aprovados
        } 
        else if (media >= 6.0) {
            printf("\nStatus: RECUPERACAO.");
            totalRecuperacao++; // Soma 1 ao contador de recuperacao
        } 
        else {
            printf("\nStatus: REPROVADO.");
            totalReprovados++; // Soma 1 ao contador de reprovados
        }
        printf("\n-------------------------------------------\n");

        printf("Deseja cadastrar outro aluno? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    // EXIBIÇÃO DO RELATÓRIO FINAL
    printf("\n========== RELATORIO FINAL ==========");
    printf("\nAlunos Aprovados:    %d", totalAprovados);
    printf("\nAlunos Recuperacao: %d", totalRecuperacao);
    printf("\nAlunos Reprovados:  %d", totalReprovados);
    printf("\nTotal de Alunos:    %d", totalAprovados + totalRecuperacao + totalReprovados);
    printf("\n=====================================\n");

    printf("Sistema encerrado. Bons estudos!\n");

    return 0;
}