#include <stdio.h>

int main() {
    printf("Triplas de Pitágoras não superiores a 500:\n");

    for (int a = 1; a <= 500; a++) {
        for (int b = a; b <= 500; b++) {
            for (int c = b; c <= 500; c++) {
                if (a * a + b * b == c * c && a + b + c <= 500) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
