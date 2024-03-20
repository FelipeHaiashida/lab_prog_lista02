#include <stdio.h>

int main() {
    printf("Quadrados dos números inteiros múltiplos de 4 de 15 a 90:\n");

    for (int i = 16; i <= 90; i += 4) {
        printf("%d² = %d\n", i, i * i);
    }

    return 0;
}
