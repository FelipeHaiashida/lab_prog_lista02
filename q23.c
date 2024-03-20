#include <stdio.h>

int main() {
    int x = 5;
    printf("Valor de x antes da operação: %d\n", x);
    printf("Resultado da pré-incrementação: %d\n", ++x);
    printf("Valor de x após pré-incrementação: %d\n", x);

    x = 5;
    printf("\nValor de x antes da operação: %d\n", x);
    printf("Resultado da pós-incrementação: %d\n", x++);
    printf("Valor de x após pós-incrementação: %d\n", x);

    return 0;
}
