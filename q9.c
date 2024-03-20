#include <stdio.h>

int main() {
    int termos = 20;
    int anterior = 1, atual = 1, proximo;

    printf("Série de Fibonacci até o 20º termo:\n");
    printf("%d ", anterior);
    printf("%d ", atual);

    for (int i = 3; i <= termos; i++) {
        proximo = anterior + atual;
        printf("%d ", proximo);
        anterior = atual;
        atual = proximo;
    }

    printf("\n");

    return 0;
}
