#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    printf("Digite um cateto do triangulo: ");
    scanf("%d", &a);
    printf("Digite um cateto do triangulo: ");
    scanf("%d", &b);

    return printf("%d", (a * a) + (b * b));
};
