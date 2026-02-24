#include <stdio.h>

int main() {
    char letra;

    printf("Digite um caractere: ");
    scanf(" %c", &letra); // lê um caractere digitado pelo usuário

    printf("\"%c\"\n", letra); // imprime entre aspas duplas

    return 0;
}