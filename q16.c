#include <stdio.h>

int main() {
    int soma_divisiveis_por_3 = 0;
    int soma_divisiveis_por_5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
            soma_divisiveis_por_3 += i;
        } else if (i > 100 && i % 5 == 0) {
            soma_divisiveis_por_5 += i;
        }
    }

    printf("Soma dos números divisíveis por 3 de 0 a 100: %d\n", soma_divisiveis_por_3);
    printf("Soma dos números divisíveis por 5 de 101 a 200: %d\n", soma_divisiveis_por_5);

    return 0;
}
