#include <stdio.h>

void main() {
    int qntNumber;

    printf("Digite a quantidade de numeros a serem informados: ");
    scanf("%d", &qntNumber);

    float somaTotal = 0;
    for (int i = 0; i < qntNumber; i++) {
        printf("Digite algum número: ");
        float n;
        scanf("%f", &n);

        somaTotal = somaTotal + n;
    }

    printf("A media das notas eh: %f", somaTotal / qntNumber);

}
