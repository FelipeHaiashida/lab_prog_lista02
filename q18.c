#include <stdio.h>

int main() {
    int total_graos = 0;
    int graos = 1;

    for (int i = 1; i <= 64; i++) {
        total_graos += graos;
        graos *= 2;
    }

    printf("Total de grãos de trigo: %llu\n", total_graos);

    return 0;
}
