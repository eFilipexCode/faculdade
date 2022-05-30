#include <stdio.h>

int main() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        int n;
        printf("Digite um numero: \n");
        scanf("%d", &n);
        total += n;
    };

    int media = total / 4;
    printf("A media dos numeros eh: %d \n", media);

    if (media >= 6)
        return printf("Aprovado.");

    return printf("Reprovado.");
};
