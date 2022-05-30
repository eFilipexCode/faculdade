#include <stdio.h>

void main () {
    char sexo;
    float altura;

    printf("Qual o seu sexo? M ou F: ");
    scanf("%c", &sexo);

    printf("Qual eh a sua altura?\n");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        printf("O seu peso ideal eh %f", (72.7 * altura) - 58);
        return;
    };

    printf("O seu peso ideal eh %f", (62.1 * altura) - 44.7);
    return;
}
