#include <stdio.h>

int main() {
    int altura_jose = 150;
    int altura_pedro = 110;
    int crescimento_jose = 2;
    int crescimento_pedro = 3;
    int anos = 0;

    while (altura_pedro <= altura_jose) {
        altura_pedro += crescimento_pedro;
        altura_jose += crescimento_jose;
        anos++;
    }

    printf("Pedro será maior que José em %d anos.\n", anos);

    return 0;
}
