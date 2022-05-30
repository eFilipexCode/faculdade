#include <stdio.h>

int calcRectanglePerimeter(int a, int b) {
    return (2 * a) + (2 * b);
};

int calcRectangleArea(int a, int b) {
    return a * b;
}

int main() {
    int sideA;
    int sideB;

    printf("Digite o primeiro lado do retangulo: \n");
    scanf("%d", &sideA);

    printf("Digite o segundo lado do retangulo: \n");
    scanf("%d", &sideB);

    int perimeter = calcRectanglePerimeter(sideA, sideB);
    int area = calcRectangleArea(sideA, sideB);

    printf("O perimetro do retangulo eh: %d\nA area do retangulo eh: %d\n", perimeter, area);
}
