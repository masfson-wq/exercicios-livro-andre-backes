#include <stdio.h>
/* Explicação:

* `%lf` é usado no `scanf` para ler um `double`.
* `%e` no `printf` imprime o número em notação científica (ex: `1.234567e+03`).
* Se quiser controlar o número de casas decimais, pode usar por exemplo:

  printf("%.4e\n", valor);
  
  Isso imprime com 4 casas decimais na notação científica.
*/
int main() {
    double valor;

    printf("Digite um valor do tipo double: ");
    scanf("%lf", &valor);
    printf("Valor em notação científica: %e\n", valor); // Imprime o valor em notação científica

    return 0;

}