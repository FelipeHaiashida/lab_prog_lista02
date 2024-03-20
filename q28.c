#include <stdio.h>

int main() {
    unsigned char X, Y;

    printf("Digite o valor de X (unsigned char): ");
    scanf("%hhu", &X);
    printf("Digite o valor de Y (unsigned char maior ou igual a 5): ");
    scanf("%hhu", &Y);

    if (Y < 5) {
        printf("Erro: Y deve ser maior ou igual a 5.\n");
        return 1;
    }

    unsigned char mascara = 0b00001111;

    for (unsigned char i = Y - 1; i >= Y - 4; i--) {
        if (i >= 5) {
            unsigned char valor_atual = (X & mascara) | (i << 4);
            printf("Elemento %hhu (anterior a Y): %hhu\n", i, valor_atual);
        }
    }

    for (unsigned char i = Y + 1; i <= Y + 4; i++) {
        if (i <= 250) { 
            unsigned char valor_atual = (X & mascara) | (i << 4);
            printf("Elemento %hhu (posterior a Y): %hhu\n", i, valor_atual);
        }
    }

    return 0;
}
