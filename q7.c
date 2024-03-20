#include <stdio.h>

int main() {
    float dividendo, divisor, resultado;

    do {
        printf("Digite o dividendo: ");
        scanf("%f", &dividendo);
        printf("Digite o divisor (não pode ser zero): ");
        scanf("%f", &divisor);
    } while (divisor == 0);

    resultado = dividendo / divisor;

    printf("O resultado da divisão é: %.2f\n", resultado);

    return 0;
}
