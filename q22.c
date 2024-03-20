#include <stdio.h>

int main() {
    int numero, digitos_7 = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 10 == 7) {
            digitos_7++;
        }
        numero /= 10;
    }

    printf("O número de dígitos 7 no inteiro é: %d\n", digitos_7);

    return 0;
}
