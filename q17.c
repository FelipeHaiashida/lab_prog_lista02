#include <stdio.h>

int main() {
    printf("Conversão de Celsius para Fahrenheit:\n");
    for (int celsius = 10; celsius <= 100; celsius += 10) {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d°C = %.2f°F\n", celsius, fahrenheit);
    }

    return 0;
}
