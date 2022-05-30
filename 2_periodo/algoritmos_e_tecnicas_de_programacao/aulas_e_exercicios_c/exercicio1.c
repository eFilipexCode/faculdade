#include <stdio.h>

float calcArea(float base, float altura) {
    return base * altura;
}

void main() {
    float base;
    float altura;
    float area;

    printf("Digite o valor da base do retangulo: \n");
    scanf("%f", &base);
    printf("Agora digite o valor da altura do retangulo: \n");
    scanf("%f", &altura);

    printf("A area do retangulo eh: %.2f", calcArea(base, altura));
}
