#include <stdio.h>
#include <string.h> 

int main() {
    char nome[50];
    float n1, n2, n3, media;
    char continuar;

    printf("=== Sistema Escolar Profissional ===\n");

    do {
        printf("\nDigite o nome completo do aluno: ");
        scanf(" %[^\n]s", nome); 

        printf("Digite as 3 notas de %s: ", nome);
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3;

        printf("\n-------------------------------------------");
        printf("\nAluno: %s", nome);
        printf("\nMedia: %.2f", media);

        // --- NOVA LOGICA DE DECISAO ---
        if (media >= 7.0) {
            printf("\nStatus: APROVADO! Parabens!");
        } 
        else if (media >= 6.0) {
            // Esta linha so executa se a media for menor que 7 E maior ou igual a 6
            printf("\nStatus: RECUPERACAO. Ainda ha uma chance!");
        } 
        else {
            // Esta linha so executa se todas as anteriores forem falsas (media < 6)
            printf("\nStatus: REPROVADO. Estude mais no proximo semestre.");
        }
        printf("\n-------------------------------------------\n");

        printf("Deseja cadastrar outro aluno? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\nSistema encerrado. Bons estudos!\n");

    return 0;
}