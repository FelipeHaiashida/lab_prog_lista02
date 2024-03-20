#include <stdio.h>

int main() {
    int maior = 0, menor = 0;
    int numero;

    do {
        printf("Digite um número inteiro [digite um número negativo e par para sair]: ");
        scanf("%d", &numero);

        if (numero < 0 && numero % 2 == 0) {
            break;
        }

        if (numero > maior || maior == 0) {
            maior = numero;
        }

        if (numero < menor || menor == 0) {
            menor = numero;
        }
    } while (1);

    printf("Produto do maior pelo menor número: %d\n", maior * menor);

    return 0;
}
