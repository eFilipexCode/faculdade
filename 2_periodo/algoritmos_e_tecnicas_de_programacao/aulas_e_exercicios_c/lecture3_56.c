#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor de um angulo: ");
    scanf("%f", &a);

    printf("Digite o valor de um angulo: ");
    scanf("%f", &b);

    printf("Digite o valor de um angulo: ");
    scanf("%f", &c);

    if (a == 90 || b == 90 || c == 90)
        return printf("Retangulo.");

    if (a > 90 || b > 90 || c > 90)
        return printf("Obtsangulo."):

    return printf("Acutangulo.");
}
