#include <stdio.h>

int main() {
    int voto, votos_paulo = 0, votos_renata = 0, votos_branco = 0, votos_nulos = 0;
    float total_votos = 0;

    while (1) {
        printf("Digite o número do candidato [5] para Paulo, [7] para Renata, [0] para voto em branco e um numero negativo para sair): ");
        scanf("%d", &voto);

        if (voto < 0)
            break;

        if (voto == 5)
            votos_paulo++;
        else if (voto == 7)
            votos_renata++;
        else if (voto == 0)
            votos_branco++;
        else
            votos_nulos++;

        total_votos++;
    }

    printf("Resultado da eleição:\n");
    printf("Votos para Paulo: %.2f%%\n", (votos_paulo / total_votos) * 100);
    printf("Votos para Renata: %.2f%%\n", (votos_renata / total_votos) * 100);
    printf("Votos em branco: %.2f%%\n", (votos_branco / total_votos) * 100);
    printf("Votos nulos: %.2f%%\n", (votos_nulos / total_votos) * 100);

    if (votos_paulo > votos_renata)
        printf("Paulo foi eleito presidente.\n");
    else if (votos_paulo < votos_renata)
        printf("Renata foi eleita presidente.\n");
    else
        printf("Houve um empate na eleição.\n");

    return 0;
}
