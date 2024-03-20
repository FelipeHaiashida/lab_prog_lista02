#include <stdio.h>

int main() {
    int numero, maior, menor;
    
    printf("Digite um número (ou zero para sair): ");
    scanf("%d", &numero);

    maior = menor = numero;

    while (numero != 0) {
        printf("Digite um número (ou zero para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("O maior número fornecido foi: %d\n", maior);
    printf("O menor número fornecido foi: %d\n", menor);

    return 0;
}
