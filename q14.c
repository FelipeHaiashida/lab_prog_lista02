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

    int divisiveis_por_3 = 0;
    for (int i = inicio; i <= fim; i++) {
        if (i % 3 == 0) {
            divisiveis_por_3++;
        }
    }

    printf("A quantidade de números divisíveis por 3 de %d a %d é: %d\n", inicio, fim, divisiveis_por_3);

    return 0;
}
