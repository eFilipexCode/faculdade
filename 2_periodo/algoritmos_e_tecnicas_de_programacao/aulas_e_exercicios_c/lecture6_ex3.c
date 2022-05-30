#include <stdio.h>
#include <stdlib.h>

int* lerVetor(int length) {
    int* array;

    array = (int*) malloc(sizeof(int) * length);

    for (int i = 0; i < length; i++) {
        printf("Digite o %dn elemento do vetor: ", i);
        scanf("%d", &array[i]);
    };

    return array;
};

void mostrarVetor(int* array, int length) {
        printf("O vetor inserido foi:");
        for (int i = 0; i < length; i++) {
            printf(" %d ", array[i]);
        };
};

int somarVetor(int* array, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + array[i];
    };

    return sum;
};

float mediaVetor(float sum, float length) {
    return sum / length;
};

int main() {
    int length;
    printf("Qual o tamanho da lista de valores? ");
    scanf("%d", &length);

    int* array = lerVetor(length);

    if (array) {
        mostrarVetor(array, length);
        int sum = somarVetor(array, length);
        printf("\nA soma total dos valores eh: %d", sum);
        printf("\nA media total dos valores eh: %.2f\n", mediaVetor(sum, length));
        return 0;
    }

    return 1;
};
