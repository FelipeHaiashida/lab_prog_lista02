#include <stdio.h>

int main() {
    int fatorial = 1;

    printf("Fatorial dos valores ímpares de 1 a 10:\n");
    for (int i = 1; i <= 10; i += 2) {
        fatorial *= i;
        printf("%d! = %d\n", i, fatorial);
    }

    return 0;
}
