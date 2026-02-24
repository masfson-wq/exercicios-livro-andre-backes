#include <stdio.h>

int main(){
    float numero1;

    printf("Digite um número real: ");
    scanf("%f", &numero1);

    //Calcula a quinta parte do número
    float quintaparte = numero1 / 5;

    //Imprime o número e a sua quinta parte
    printf("O número digitado foi: %.2f\n", numero1);
    printf("O número digitado foi: %.2f | Quinta parte: %.2f\n", numero1, numero1 / 5);





    return 0;
}
