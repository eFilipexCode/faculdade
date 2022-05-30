#include <stdio.h>

int main() {
    // int initial = 0;
    int qtdWeightHeavierThan60 = 0;
    float sumAllWeightsHeavierThan60;
    float heaviest = 0;

    do {
        float weight;
        printf("Digite um peso: ");
        scanf("%f", &weight);

        if (weight < 0) break;

        if (weight > 60) {
            sumAllWeightsHeavierThan60 += weight;
            qtdWeightHeavierThan60++;
        };

        if (weight > heaviest) heaviest = weight;

    } while (1);

    printf("A media dos pesos maiores que 60kg eh: %f\n", (sumAllWeightsHeavierThan60 / qtdWeightHeavierThan60));
    printf("O maior peso eh: %f", heaviest);
};
