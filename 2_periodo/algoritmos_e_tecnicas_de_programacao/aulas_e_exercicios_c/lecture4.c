#include <stdio.h>

int main() {
    int n = 0;
    int qtdNumeros = 0;
    int qtdPares = 0;

    while(qtdNumeros < 10) {
        int value;
        printf("\n Digite algum valor: ");
        scanf("%d", &value);

        if (value % 2 == 0) {
            n = n + value;
            qtdPares++;
        }

        qtdNumeros++;
    };

    printf("\nSoma dos numeros pares: %d \n", n);
    printf("A media aritmetica dos numeros pares eh: %d", n / qtdPares);

    return 1;
}
