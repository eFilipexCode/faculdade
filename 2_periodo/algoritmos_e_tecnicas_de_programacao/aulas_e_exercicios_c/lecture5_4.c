#include <stdio.h>

int main() {
    float lapDurations[10];
    float bestLapDuration;
    int lapWithBestDuration = 1;
    float sumDurations = 0;

    for (int i = 0; i <= 9; i++) {
        printf("Digite a duracao da %d° volta: ", i + 1);
        scanf("%f", &lapDurations[i]);
        sumDurations += lapDurations[i];

        if (i == 0) bestLapDuration = lapDurations[i];

        if (lapDurations[i] < bestLapDuration) {
            bestLapDuration = lapDurations[i];
            lapWithBestDuration = i + 1;
        };
    };

    printf("O menor tempo do automovel foi: %.2f\n", bestLapDuration);
    printf("A volta do menor tempo foi: %d\n", lapWithBestDuration);
    printf("O tempo medio de cada volta eh: %.2f\n", sumDurations / 10);
    return 0;
}
