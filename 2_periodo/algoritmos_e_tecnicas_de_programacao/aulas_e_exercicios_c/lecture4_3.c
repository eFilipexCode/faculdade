#include <stdio.h>

int main() {
    int initial = -1;

    int sumNumbers = 0;
    int qtdNumbers = 0;
    int qtdEvenNumbers = 0;
    int sumEvenNumbers = 0;
    int highest = 0;
    int lowest;

    while(initial != 0) {
        int value;
        printf("Digite algum valor qualquer: ");
        scanf("%d", &value);

        if (value == 0) break;

        sumNumbers += value;
        qtdNumbers++;

        if (value > highest) highest = value;
        if (value < lowest) lowest = value;
        if (value % 2 == 0) {
          qtdEvenNumbers++;
          sumEvenNumbers += value;
        };
    };

    printf("\nA soma dos numeros digitados eh: %d\n", sumNumbers);
    printf("A quantidade de numeros digitados eh: %d\n", qtdNumbers);
    printf("A media dos numeros digitados eh: %d\n", (sumNumbers / qtdNumbers));
    printf("O maior numero digitado foi: %d\n", highest);
    printf("O menor numero digitado foi: %d\n", lowest);
    printf("A media dos numeros pares eh: %d\n", (sumEvenNumbers / qtdEvenNumbers));

    return;
};
