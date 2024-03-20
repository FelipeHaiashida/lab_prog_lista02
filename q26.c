#include <stdio.h>

int main() {
    printf("Conversão entre decimal, binário, octal e hexadecimal:\n");
    printf("Decimal\tBinário\tOctal\tHexadecimal\n");

    for (int i = 1; i <= 256; i++) {
        printf("%d\t%o\t%x\t%X\n", i, i, i, i);
    }

    return 0;
}
