#include <stdio.h>

int calcAreaTriangle(int a, int b) {
    return (a * b) / 2;
}

int main () {
    int width, height;

    printf("Digite o valor da base do triangulo: \n");
    scanf("%d", &width);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%d", &height);

    printf("A area do triangulo eh %d", calcAreaTriangle(width, height));
};
