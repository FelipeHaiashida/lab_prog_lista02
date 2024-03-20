#include <stdio.h>

int main() {
    int numero, original, reverso = 0;

    printf("Digite um número com 5 digitos: ");
    scanf("%d", &numero);

    original = numero;

    while (numero != 0) {
        reverso = reverso * 10 + numero % 10;
        numero /= 10;
    }

    if (original == reverso) {
        printf("O número %d é um palíndromo.\n", original);
    } else {
        printf("O número %d não é um palíndromo.\n", original);
    }

    return 0;
}
