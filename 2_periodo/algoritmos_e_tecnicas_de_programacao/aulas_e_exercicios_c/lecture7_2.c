#include <stdio.h>

int main(){
    int values[5];
    int qtPositives = 0;
    int qtNegatives = 0;
    int highest = 0;
    int lowest = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor qualquer: ");
        scanf("%d", &values[i]);

        if (highest < values[i]) highest = values[i];
        if (lowest > values[i]) lowest = values[i];
        if (values[i] > 0) qtPositives++;
        if (values[i] < 0) qtNegatives++;
    };

    printf("\nA quantidade de valores positivos eh: %d", qtPositives);
    printf("\nA quantidade de valores negativos eh: %d", qtNegatives);
    printf("\nA quantidade de valores nulos eh: %d", (5 - qtPositives - qtNegatives));
    printf("\nO maior valor do vetor eh: %d", highest);
    printf("\nO menor valor do vetor eh: %d", lowest);
};
