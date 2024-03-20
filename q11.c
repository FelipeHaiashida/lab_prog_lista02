#include <stdio.h>

int main() {
    int A, B;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int inicio, fim;
    if (A > B) {
        inicio = B;
        fim = A;
    } else {
        inicio = A;
        fim = B;
    }

    printf("Quadrados dos números inteiros múltiplos de 4 de %d a %d:\n", inicio, fim);

    for (int i = inicio; i <= fim; i++) {
        if (i % 4 == 0) {
            printf("%d² = %d\n", i, i * i);
        }
    }

    return 0;
}
