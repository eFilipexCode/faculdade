#include <stdio.h>

int main() {
    float x, y;
    printf("Digite um valor: ");
    scanf("%f", &x);

    printf("Digite outro valor: ");
    scanf("%f", &y);

    if (x > y)
        return printf("%f, %f", y, x);

    return printf("%f, %f", x, y);
};
