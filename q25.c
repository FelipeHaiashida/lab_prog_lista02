#include <stdio.h>

int main() {
    int n;
    double pi = 0;
    int sinal = 1;

    printf("Tabela de aproximação de pi pela série infinita:\n");
    printf("Termos\tAproximação de pi\n");

    for (n = 1; n <= 100; n += 2) {
        pi += sinal * 4.0 / n;
        printf("%d\t%f\n", (n + 1) / 2, pi);

        sinal *= -1;
    }

    return 0;
}
