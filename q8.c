#include <stdio.h>

int main() {
    float valor_da_mercadoria, entrada, prestacoes;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor_da_mercadoria);

    entrada = valor_da_mercadoria / 3;
    prestacoes = entrada;

    printf("Valor da entrada: R$%f\n", entrada);
    printf("Valor das duas prestações: R$%f\n", prestacoes);

    return 0;
}
