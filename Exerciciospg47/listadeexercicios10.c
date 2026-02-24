#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite o dia, mês e ano separados por espaço: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("%d\\%d\\%d\n", dia, mes, ano);

    return 0;
}