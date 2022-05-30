#include <stdio.h>

int main() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        int n;
        printf("Digite um numero: \n");
        scanf("%d", &n);
        total += n;
    };

    printf("A media dos numeros eh: %d", total / 4);
};
