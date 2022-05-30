#include <stdio.h>

int main() {
    int latest = -1;
    int biggest = 0;

    while(latest != 0) {
        int value;
        printf("Digite um valor qualquer: ");
        scanf("%d", &value);

        latest = value;
        if (value > biggest) biggest = value;
    }

    printf("O maior valor inserido foi %d", biggest);
    return 1;
};
