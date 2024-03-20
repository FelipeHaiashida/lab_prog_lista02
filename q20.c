#include <stdio.h>

int main() {
    int A, B;
    float media = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    for (int i = A; i <= B; i++) {
        media += i;
    }

    media /= (B - A + 1);
    printf("A média aritmética dos números entre %d e %d é: %.2f\n", A, B, media);

    return 0;
}
