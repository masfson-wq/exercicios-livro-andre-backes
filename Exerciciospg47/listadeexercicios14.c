#include <stdio.h>

int main() {
    char c1, c2, c3;

    printf("Digite três caracteres separados por espaço: ");
    scanf(" %c %c %c", &c1, &c2, &c3);

    printf("%c\n", c1);
    printf("%c\n", c2);
    printf("%c\n", c3);

    return 0;
}