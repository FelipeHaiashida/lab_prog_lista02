#include <stdio.h>

int main() {
    int A, B;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int soma_pares = 0;
    int inicio, fim;

    if (A > B) {
        inicio = B;
        fim = A;
    } else {
        inicio = A;
        fim = B;
    }

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            soma_pares += i;
        }
    }

    printf("A soma dos números pares de %d a %d é: %d\n", inicio, fim, soma_pares);

    return 0;
}
