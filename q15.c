#include <stdio.h>
#include <math.h>

int main() {
    int base = 3;
    printf("Potências de 3 de 0 a 7:\n");

    for (int expoente = 0; expoente <= 7; expoente++) {
        printf("3^%d = %.0f\n", expoente, pow(base, expoente));
    }

    return 0;
}
